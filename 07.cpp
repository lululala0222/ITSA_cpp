#include <iostream>
#include <vector>

// 基礎題目11：矩陣反轉
// 將矩陣進行轉置，即將矩陣的行與列互換
int main() {
    int r, c;
    while (std::cin >> r >> c) {
        std::vector<std::vector<int>> in(r, std::vector<int>(c));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                std::cin >> in[i][j];
            }
        }

        std::vector<std::vector<int>> out(c, std::vector<int>(r));
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                out[i][j] = in[j][i];
            }
        }

        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                std::cout << out[i][j];
                if (j != r - 1)
                    std::cout << " ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}
