#include <iostream>

// 基礎題目6：季節判定
int main() {
    int in;
    while (std::cin >> in) {  // 使用 std::cin 代替 scanf，並自動檢測 EOF
        switch (in) {
            case 3: case 4: case 5:
                std::cout << "Spring\n";
                break;
            case 6: case 7: case 8:
                std::cout << "Summer\n";
                break;
            case 9: case 10: case 11:
                std::cout << "Autumn\n";
                break;
            case 12: case 1: case 2:
                std::cout << "Winter\n";
                break;
            default:
                std::cout << "Invalid month\n";  // 可以加一個 default 處理無效的月份輸入
                break;
        }
    }
    return 0;
}
