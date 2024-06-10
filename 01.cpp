#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

// C_AR03: 計算陣列中所有元素的立方和
int main() {
    std::vector<int> in(6);  // 創建一個長度為6的向量

    // 讀取六個整數輸入
    for (int i = 0; i < 6; ++i) {
        std::cin >> in[i];
    }

    // 使用 accumulate 和 lambda 函數計算所有元素的立方和
    int cube_sum = std::accumulate(in.begin(), in.end(), 0, [](int sum, int x) {
        return sum + std::pow(x, 3);
    });

    // 輸出計算結果
    std::cout << cube_sum << std::endl;

    return 0;
}
