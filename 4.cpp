#include <iostream>
#include <cmath>

// 題目8. 質數判別

int main() {
    int n;
    while (std::cin >> n) {
        bool isPrime = true;
        if (n <= 1) isPrime = false;  // 對 1 以及更小的數進行處理
        for (int i = 2; i <= std::sqrt(n); ++i) {  // 優化：只需檢查到 sqrt(n)
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}
