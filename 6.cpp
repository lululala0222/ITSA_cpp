#include <iostream>

// 基礎題目10：輾轉相除法
// 使用歐幾里得算法求兩數的最大公因數
int gcd(int a, int b) {
    if (a < b)
        return gcd(b, a);
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    while (std::cin >> a >> b) {
        std::cout << gcd(a, b) << std::endl;
    }
    return 0;
}
