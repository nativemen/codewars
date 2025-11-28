#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
    std::vector<int> result;
    size_t row = snail_map.size();
    if (row == 0) {
        return result;
    }

    size_t col = snail_map[0].size();
    if (col == 0) {
        return result;
    }

    size_t total = row * col;
    int left = 0;
    int right = col - 1;
    int top = 0;
    int bottom = row - 1;

    while (result.size() < total) {
        for (int i = left; i <= right; i++) {
            result.push_back(snail_map[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            result.push_back(snail_map[i][right]);
        }
        right--;

        for (int i = right; i >= left; i--) {
            result.push_back(snail_map[bottom][i]);
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            result.push_back(snail_map[i][left]);
        }
        left++;
    }

    return result;
}