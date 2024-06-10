#include <iostream>

// 基礎題目七：複數運算
// 對複數進行加法、減法和乘法運算。複數以兩個整數表示，形如 (a + bi)。
int main() {
    int times;
    char oper;
    int a, b, c, d;
    std::cin >> times;  // Read the number of operations to perform

    while (times--) {
        std::cin >> oper;  // Read the operator
        std::cin >> a >> b >> c >> d;  // Read the real and imaginary parts of two complex numbers

        switch (oper) {
            case '+':
                std::cout << a + c << " " << b + d << "\n";
                break;
            case '-':
                std::cout << a - c << " " << b - d << "\n";
                break;
            case '*':
                // (a+bi)*(c+di) = (ac-bd) + (bc+ad)i
                std::cout << a * c - b * d << " " << b * c + a * d << "\n";
                break;
        }
    }
    return 0;
}
