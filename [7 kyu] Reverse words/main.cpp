#include <algorithm>
#include <string>
#include <vector>

std::string reverse_words(std::string str) {
    std::string result;
    std::string word;

    for (const auto &c : str) {
        if (c == ' ') {
            if (!word.empty()) {
                std::reverse(word.begin(), word.end());
                result.append(word);
                word.clear();
            }

            result.push_back(c);
            continue;
        }

        word.push_back(c);
    }

    if (!word.empty()) {
        std::reverse(word.begin(), word.end());
        result.append(word);
    }

    return result;
}

#include <string>

std::string reverse_words(std::string str) {
    auto begin = str.begin();
    auto end = str.end();

    while (begin < end) {
        auto space = find(begin, end, ' ');
        std::reverse(begin, space);
        begin = space + 1;
    }

    return str;
}