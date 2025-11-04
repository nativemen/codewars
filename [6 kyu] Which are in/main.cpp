#include <algorithm>
#include <string>
#include <vector>

class WhichAreIn {
public:
    static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2);
};

std::vector<std::string> WhichAreIn::inArray(std::vector<std::string> &array1, std::vector<std::string> &array2) {
    std::vector<std::string> result;

    for (const auto &s1 : array1) {
        for (const auto &s2 : array2) {
            if (s2.find(s1) != s2.npos) {
                result.push_back(s1);
                break;
            }
        }
    }

    std::sort(result.begin(), result.end());

    return result;
}
