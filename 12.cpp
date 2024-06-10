#include <iostream>
#include <iomanip>

// 基礎題目34：標準體重計算
// 根據輸入的身高和性別，計算標準體重。男性(1)：(身高cm - 80) * 0.7，女性(0)：(身高cm - 70) * 0.6。
int main() {
    float stature;
    int male_or_female;
    while (std::cin >> stature >> male_or_female) {  // 讀取身高和性別
        if (male_or_female == 1)
            std::cout << std::fixed << std::setprecision(1) << ((stature - 80) * 0.7) << std::endl;  // 男性標準體重
        else
            std::cout << std::fixed << std::setprecision(1) << ((stature - 70) * 0.6) << std::endl;  // 女性標準體重
    }
    return 0;
}
