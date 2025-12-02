#include <stddef.h>

int **matrix_multiplication(const int *const a[/*n*/], const int *const b[/*n*/], int n) {
    // TODO: Return the result of A × B in the form of an n × n matrix
    // Memory model: the tests expect a dynamically allocated array
    // of `n` dynamically allocated arrays. Both the returned array
    // and its `n` sub-arrays will be freed.
    int **result = (int **)calloc(n, sizeof(int *));
    if (result == NULL) {
        goto exit1;
    }

    for (int i = 0; i < n; i++) {
        result[i] = (int *)malloc(n * sizeof(int));
        if (result[i] == NULL) {
            goto exit2;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return result;

exit2:
    for (int i = 0; i < n; i++) {
        if (result[i] != NULL) {
            free(result[i]);
            result[i] = NULL;
        }
    }

    free(result);

exit1:
    return NULL;
}