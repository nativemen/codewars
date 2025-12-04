#include <string>

int last_digit(const std::string &str1, const std::string &str2) {
    int len2 = str2.length();
    int b = str2[len2 - 1] - '0';
    if (len2 == 1 && b == 0) {
        return 1;
    }

    const int map[][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {6, 2, 4, 8},
        {1, 3, 9, 7},
        {6, 4, 6, 4},
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {1, 7, 9, 3},
        {6, 8, 4, 2},
        {1, 9, 1, 9},
    };

    int len1 = str1.length();
    int a = str1[len1 - 1] - '0';
    if (len2 > 1) {
        b += str2[len2 - 2] * 10;
    }

    return map[a][b % 4];
}

#include <string>

int last_digit(const std::string &str1, const std::string &str2) {
    int len2 = str2.length();
    int b = str2[len2 - 1] - '0';
    if (len2 == 1 && b == 0) {
        return 1;
    }

    int len1 = str1.length();
    int a = str1[len1 - 1] - '0';
    if (len2 > 1) {
        b += str2[len2 - 2] * 10;
    }

    b = b % 4;
    if (b == 0) {
        b = 4;
    }

    int result = 1;

    for (int i = 1; i <= b; i++) {
        result = (a * result) % 10;
    }

    return result;
}