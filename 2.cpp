#include <iostream>

// 基礎題目4：停車費計算
int main() {
    int h1, m1, h2, m2;
    std::cin >> h1 >> m1;
    std::cin >> h2 >> m2;
    
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int totalT = t2 - t1;
    int ans = 0;
    
    if (totalT > 240) {
        ans += (totalT - 240) / 30 * 60;
        totalT = 240;
    }
    if (totalT > 120 && totalT <= 240) {
        ans += (totalT - 120) / 30 * 40;
        totalT = 120;
    }
    if (totalT <= 120) {
        ans += (totalT) / 30 * 30;
    }
    
    std::cout << ans << std::endl;
    return 0;
}
