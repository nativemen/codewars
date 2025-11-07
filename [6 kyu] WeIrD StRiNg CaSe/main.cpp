#include <string>
#include <string_view>

std::string to_weird_case(std::string_view str) {
    bool is_upper = true;
    std::string s;

    for (const auto &c : str) {
        if (c == ' ') {
            s.push_back(c);
            is_upper = true;
            continue;
        }

        s.push_back(is_upper ? toupper(static_cast<unsigned char>(c)) : tolower(static_cast<unsigned char>(c)));
        is_upper = !is_upper;
    }

    return s;
}

#include <string>
#include <string_view>

std::string to_weird_case(std::string_view str) {
    bool is_upper = true;
    std::string s(str);

    for (auto &c : s) {
        if (c == ' ') {
            is_upper = true;
            continue;
        }

        c = is_upper ? static_cast<char>(toupper(static_cast<unsigned char>(c)))
                     : static_cast<char>(tolower(static_cast<unsigned char>(c)));
        is_upper = !is_upper;
    }

    return s;
}