#include <ctype.h>

char *to_weird_case(char *string) {
    char *p = string;
    int count = 0;

    while (*p != '\0') {
        if (*p == ' ') {
            p++;
            count = 0;
            continue;
        }

        *p = (count % 2 == 0) ? toupper(*p) : tolower(*p);
        p++;
        count++;
    }

    return string;
}

#include <ctype.h>
#include <stdbool.h>

char *to_weird_case(char *string) {
    int i = 0;
    bool is_upper = true;

    while (string[i] != '\0') {
        if (string[i] == ' ') {
            i++;
            is_upper = true;
            continue;
        }

        string[i] = is_upper ? toupper(string[i]) : tolower(string[i]);
        i++;
        is_upper = !is_upper;
    }

    return string;
}