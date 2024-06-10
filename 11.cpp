#include <iostream>
#include <limits> // For numeric limits

// 基礎題目21：最大值與最小值
// 讀取10個數字，並輸出這些數字的最大值和最小值。
int main() {
    int t = 10;
    double min = std::numeric_limits<double>::max(); // 使用 limits 定義極大值
    double max = -std::numeric_limits<double>::max(); // 使用 limits 定義極小值

    while (t--) {
        double a;
        std::cin >> a; // 讀取用戶輸入
        if (a < min) min = a;
        if (a > max) max = a;
    }

    std::cout << "maximum:" << std::fixed << std::setprecision(2) << max << std::endl;
    std::cout << "minimum:" << std::fixed << std::setprecision(2) << min << std::endl;

    return 0;
}
