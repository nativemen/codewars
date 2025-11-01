#include <limits.h>
#include <stddef.h>
#include <stdlib.h>

int maxSequence(const int array[/* n */], size_t n) {
    if (n == 0) {
        return 0;
    }

    int *dp = (int *)calloc(n, sizeof(int));
    if (dp == NULL) {
        return INT_MIN;
    }

    dp[0] = (array[0] < 0) ? 0 : array[0];
    int result = dp[0];

    for (size_t i = 1; i < n; i++) {
        dp[i] = (dp[i - 1] < 0) ? array[i] : array[i] + dp[i - 1];
        result = (dp[i] > result) ? dp[i] : result;
    }

    return result;
}

#include <math.h>
#include <stddef.h>

int maxSequence(const int array[/* n */], size_t n) {
    int sum = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
        if (sum < 0) {
            sum = 0;
        } else {
            max = fmax(max, sum);
        }
    }

    return max;
}

#include <math.h>
#include <stddef.h>

int maxSequence(const int array[/* n */], size_t n) {
    int sum = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
        if (sum < 0) {
            sum = 0;
        } else {
            max = (sum > max) ? sum : max;
        }
    }

    return max;
}

#include <stddef.h>

int maxSequence(const int array[/* n */], size_t n) {
    int sum = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        sum = (sum + array[i] < 0) ? 0 : sum + array[i];
        max = (sum > max) ? sum : max;
    }

    return max;
}