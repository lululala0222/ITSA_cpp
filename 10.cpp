#include <iostream>
#include <cctype>
#include <vector>

// 基礎題目15：文字及字母出現次數
// 統計輸入文本的單詞數以及每個字母的出現次數。忽略大小寫差異。
int main() {
    char ch;
    bool former_is_space = true; // 初始化為 true 處理文本開頭的單詞
    int num_of_word = 0;
    std::vector<int> alpha(26, 0); // 使用 vector 存儲字母頻率

    while (std::cin.get(ch) && ch != '\n') { // 讀取到換行停止
        if (isspace(ch)) {
            if (!former_is_space) num_of_word++;
            former_is_space = true;
        } else if (isalpha(ch)) {
            former_is_space = false;
            ch = tolower(ch); // 轉換為小寫
            alpha[ch - 'a']++;
        }
    }

    if (!former_is_space) num_of_word++; // 處理最後一個單詞

    std::cout << num_of_word << std::endl; // 輸出單詞數
    for (int i = 0; i < 26; i++) {
        if (alpha[i] != 0) {
            std::cout << char(i + 'a') << " : " << alpha[i] << std::endl;
        }
    }

    return 0;
}
