#include <algorithm>
#include <string>
#include <vector>

static void backtrace(std::vector<char> &array, std::string &str, size_t len, std::vector<std::string> &v) {
    if (str.size() == len) {
        if (std::find(v.begin(), v.end(), str) == v.end()) {
            v.push_back(str);
        }

        return;
    }

    for (auto &c : array) {
        if (c == '\0') {
            continue;
        }

        char old = c;
        str.push_back(c);
        c = '\0';
        backtrace(array, str, len, v);
        c = old;
        str.pop_back();
    }
}

std::vector<std::string> permutations(std::string s) {
    std::vector<char> array;

    for (auto &c : s) {
        array.push_back(c);
    }

    std::vector<std::string> result;
    std::string str;

    backtrace(array, str, s.size(), result);

    return result;
}

#include <algorithm>
#include <string>
#include <vector>

std::vector<std::string> permutations(std::string s) {
    std::sort(s.begin(), s.end());

    std::vector<std::string> result;

    do {
        result.push_back(s);
    } while (std::next_permutation(s.begin(), s.end()));

    return result;
}

#include <string>
#include <unordered_set>
#include <vector>

static void permute(std::string prefix, std::string remain, std::unordered_set<std::string> &sets) {
    if (remain.empty()) {
        sets.insert(prefix);
        return;
    }

    for (size_t i = 0; i < remain.size(); i++) {
        permute(prefix + remain.at(i), remain.substr(0, i) + remain.substr(i + 1), sets);
    }
}

std::vector<std::string> permutations(std::string s) {
    std::unordered_set<std::string> sets;

    permute("", s, sets);

    return std::vector<std::string>(sets.begin(), sets.end());
}