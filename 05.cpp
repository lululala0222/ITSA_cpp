#include <iostream>

// 基礎題目9. 
// 計算正整數被3整除之數值之總和
int main() {
    int n;
    while (std::cin >> n) {
        int sum = 0;
        for (int i = 3; i <= n; i += 3) {  // 從 3 開始，每次增加 3
            sum += i;
        }
        std::cout << sum << "\n";
    }
    return 0;
}
