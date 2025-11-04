#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

static bool isSubString(const char *a, const char *b) {
    for (size_t i = 0; i < strlen(b); i++) {
        if (b[i] == *a) {
            if (strncmp(a, b + i, strlen(a)) == 0) {
                return true;
            }
        }
    }

    return false;
}

// sz1: size of array1, sz2: size of array2, lg: size of the returned array
char **inArray(char *array1[], int sz1, char *array2[], int sz2, int *lg) {
    *lg = 0;

    char **result = (char **)calloc(sz1, sizeof(char *));
    if (result == NULL) {
        return NULL;
    }

    qsort(array1, sz1, sizeof(char *), compare);
    for (int i = 0; i < sz1; i++) {
        for (int j = 0; j < sz2; j++) {
            if (isSubString(array1[i], array2[j])) {
                result[(*lg)++] = strdup(array1[i]);
                break;
            }
        }
    }

    return result;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

// sz1: size of array1, sz2: size of array2, lg: size of the returned array
char **inArray(char *array1[], int sz1, char *array2[], int sz2, int *lg) {
    *lg = 0;

    char **result = (char **)calloc(sz1, sizeof(char *));
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < sz1; i++) {
        for (int j = 0; j < sz2; j++) {
            if (strstr(array2[j], array1[i])) {
                result[(*lg)++] = strdup(array1[i]);
                break;
            }
        }
    }

    qsort(result, *lg, sizeof(char *), compare);

    return result;
}