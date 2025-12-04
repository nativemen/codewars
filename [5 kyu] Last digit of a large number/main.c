/*
 * 0^0 = 1
 * 0^n = 0
 * 1^n = 1
 * 5^n = 5
 * 6^n = 6
 * 2^1 = 2, 2^2 = 4, 2^3 = 8, 2^4 = 6
 * 3^1 = 3, 3^2 = 9, 3^3 = 7, 3^4 = 1
 * 4^1 = 4, 4^2 = 6, 4^3 = 4, 4^4 = 6
 * 7^1 = 7, 7^2 = 9, 7^3 = 3, 7^4 = 1
 * 8^1 = 8, 8^2 = 4, 8^3 = 2, 8^4 = 6
 * 9^1 = 9, 9^2 = 1, 9^3 = 9, 9^4 = 1
 */
int last_digit(const char *a, const char *b) {
    int len_b = strlen(b);
    if (len_b == 1 && *b == '0') {
        return 1;
    }

    int len_a = strlen(a);
    int last_digit_a = a[len_a - 1] - '0';

    if (last_digit_a == 0 || last_digit_a == 1 || last_digit_a == 5 || last_digit_a == 6) {
        return last_digit_a;
    }

    int last_two_digits = (len_b == 1) ? b[len_b - 1] - '0' : (b[len_b - 2] - '0') * 10 + b[len_b - 1] - '0';
    int exp = last_two_digits % 4;
    if (exp == 0) {
        exp = 4;
    }

    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result = (result * last_digit_a) % 10;
    }

    return result;
}

int last_digit(const char *a, const char *b) {
    int len_b = strlen(b);
    int y = b[len_b - 1] - '0';
    if (len_b == 1 && y == 0) {
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

    int len_a = strlen(a);
    int x = a[len_a - 1] - '0';
    if (len_b > 1) {
        y += (b[len_b - 2] - '0') * 10;
    }

    return map[x][y % 4];
}