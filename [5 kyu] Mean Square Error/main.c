#include <stddef.h>

double mean_square_error(size_t n, const int a[n], const int b[n]) {
    if (n == 0) {
        return 0.0;
    }

    double sum = 0.0;

    for (size_t i = 0; i < n; i++) {
        double val = (double)a[i] - (double)b[i];
        sum += val * val;
    }

    return sum / (double)n;
}

#include <math.h>
#include <stddef.h>

double mean_square_error(size_t n, const int a[n], const int b[n]) {
    if (n == 0) {
        return 0.0;
    }

    double sum = 0.0;

    for (size_t i = 0; i < n; i++) {
        sum += pow((double)a[i] - (double)b[i], 2);
    }

    return sum / (double)n;
}