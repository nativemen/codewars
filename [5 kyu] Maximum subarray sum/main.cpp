#include <vector>

int maxSequence(const std::vector<int> &arr) {
    int sum = 0;
    int max = 0;

    for (const auto &val : arr) {
        sum += val;

        if (sum < 0) {
            sum = 0;
        } else {
            max = std::max(max, sum);
        }
    }

    return max;
}

#include <vector>

int maxSequence(const std::vector<int> &arr) {
    int sum = 0;
    int max = 0;

    for (const auto &val : arr) {
        sum = (sum + val < 0) ? 0 : sum + val;
        max = (sum > max) ? sum : max;
    }

    return max;
}