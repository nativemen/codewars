#include <string>

std::string alphabet_position(const std::string &text) {
    std::string result;

    for (const auto &c : text) {
        if (isalpha(c)) {
            if (!result.empty()) {
                result += " ";
            }

            result += std::to_string(tolower((int)c) - 'a' + 1);
        }
    }

    return result;
}

#include <string>
#include <unordered_map>

std::string alphabet_position(const std::string &text) {
    const std::unordered_map<char, std::string> maps = {
            {'a', "1"},  {'b', "2"},  {'c', "3"},  {'d', "4"},  {'e', "5"},  {'f', "6"},  {'g', "7"},
            {'h', "8"},  {'i', "9"},  {'j', "10"}, {'k', "11"}, {'l', "12"}, {'m', "13"}, {'n', "14"},
            {'o', "15"}, {'p', "16"}, {'q', "17"}, {'r', "18"}, {'s', "19"}, {'t', "20"}, {'u', "21"},
            {'v', "22"}, {'w', "23"}, {'x', "24"}, {'y', "25"}, {'z', "26"}

    };
    std::string result;

    for (const auto &c : text) {
        if (isalpha(c)) {
            if (!result.empty()) {
                result += " ";
            }

            result += maps.at(tolower(c));
        }
    }

    return result;
}