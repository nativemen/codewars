#include <stdlib.h>

int string_to_number(const char *src) {
    return (int)strtol(src, NULL, 10);
}

int string_to_number(const char *src) {
    return atoi(src);
}