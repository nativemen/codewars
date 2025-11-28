#include <stdlib.h>

int *snail(size_t *outsz, const int **mx, size_t rows, size_t cols) {
    // The numbers of rows and cols are passed separately for historical reasons
    // Return a heap allocated array, report the size in *outsz
    *outsz = 0;

    if (rows == 0 || cols == 0) {
        return NULL;
    }

    size_t total = rows * cols;
    int *result = (int *)malloc(total * sizeof(int));
    if (result == NULL) {
        return NULL;
    }

    size_t count = 0;
    int left = 0;
    int right = cols - 1;
    int top = 0;
    int bottom = rows - 1;
    int direction = 0;

    while (count < total) {
        switch (direction) {
            case 0: {
                for (int i = left; i <= right; i++) {
                    result[count++] = mx[top][i];
                }
                top++;
                break;
            }
            case 1: {
                for (int i = top; i <= bottom; i++) {
                    result[count++] = mx[i][right];
                }
                right--;
                break;
            }
            case 2: {
                for (int i = right; i >= left; i--) {
                    result[count++] = mx[bottom][i];
                }
                bottom--;
                break;
            }
            default: {
                for (int i = bottom; i >= top; i--) {
                    result[count++] = mx[i][left];
                }
                left++;
                break;
            }
        }

        direction = (direction + 1) % 4;
    }

    *outsz = total;

    return result;
}

#include <stdlib.h>

int *snail(size_t *outsz, const int **mx, size_t rows, size_t cols) {
    // The numbers of rows and cols are passed separately for historical reasons
    // Return a heap allocated array, report the size in *outsz
    *outsz = 0;

    if (rows == 0 || cols == 0) {
        return NULL;
    }

    size_t total = rows * cols;
    int *result = (int *)malloc(total * sizeof(int));
    if (result == NULL) {
        return NULL;
    }

    size_t count = 0;
    int left = 0;
    int right = cols - 1;
    int top = 0;
    int bottom = rows - 1;
    int direction = 0;

    while (count < total) {
        for (int i = left; i <= right; i++) {
            result[count++] = mx[top][i];
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            result[count++] = mx[i][right];
        }
        right--;

        for (int i = right; i >= left; i--) {
            result[count++] = mx[bottom][i];
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            result[count++] = mx[i][left];
        }
        left++;

        direction = (direction + 1) % 4;
    }

    *outsz = total;

    return result;
}