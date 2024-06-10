#include <iostream>

// 基礎題目12：遞迴練習
// 使用遞迴函式計算給定公式：f(n) = f(n-1) + f(n/2)。當 n 為 0 或 1 時，f(n) = n + 1。
int compute(int a) {
    if (a == 0 || a == 1) return a + 1;
    else return compute(a - 1) + compute(a / 2);
}

int main() {
    int a;
    std::cin >> a;  // 讀取整數輸入
    std::cout << compute(a) << std::endl;  // 輸出遞迴函式的結果
    return 0;
}
