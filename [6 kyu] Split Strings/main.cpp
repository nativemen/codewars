#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
    std::vector<std::string> result;

    for (int i = 0; i < s.size(); i += 2) {
        if (i + 2 > s.size()) {
            break;
        }
        result.push_back(s.substr(i, 2));
    }

    if (s.size() % 2 != 0) {
        std::string last = s.substr(s.size() - 1, 1);
        last.push_back('_');
        result.push_back(last);
    }

    return result;
}

std::vector<std::string> solution(const std::string &s) {
    std::vector<std::string> result;

    for (int i = 0; i < s.size(); i += 2) {
        result.push_back(s.substr(i, 2));
    }

    if (s.size() % 2 != 0) {
        result.back() += "_";
    }

    return result;
}