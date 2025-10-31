#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text) {
    const char *maps[] = {"1",  "2",  "3",  "4",  "5",  "6",  "7",  "8",  "9",  "10", "11", "12", "13",
                          "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26"};
    int len = strlen(text);
    char *result = (char *)calloc(len * 3, sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        if (isalpha(text[i])) {
            if (strlen(result) != 0) {
                strcat(result, " ");
            }
            strcat(result, maps[tolower(text[i]) - 'a']);
        }
    }

    return result;
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text) {
    int len = strlen(text);
    char *result = (char *)calloc(len * 3, sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        if (isalpha(text[i])) {
            if (strlen(result) != 0) {
                strcat(result, " ");
            }
            sprintf(result, "%s%d", result, tolower(text[i]) - 'a' + 1);
        }
    }

    return result;
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text) {
    int len = strlen(text);
    char *result = (char *)calloc(len * 3 + 1, sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        if (isalpha(text[i])) {
            sprintf(result, "%s%d ", result, tolower(text[i]) - 'a' + 1);
        }
    }

    result[strlen(result) - 1] = '\0';

    return result;
}