#include <algorithm>
#include <unordered_map>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int> &numbers, int target) {
    std::vector<std::pair<int, std::size_t>> nums;

    for (std::size_t i = 0; i < numbers.size(); i++) {
        nums.push_back({numbers[i], i});
    }

    std::sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left].first + nums[right].first;

        if (sum < target) {
            left++;
        } else if (sum > target) {
            right--;
        } else {
            return {nums[left].second, nums[right].second};
        }
    }

    return {0, 0};
}

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int> &numbers, int target) {
    for (std::size_t i = 0; i < numbers.size() - 1; i++) {
        for (std::size_t j = 1; j < numbers.size(); j++) {
            if (numbers[i] + numbers[j] == target) {
                return {i, j};
            }
        }
    }

    return {0, 0};
}

#include <unordered_map>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int> &numbers, int target) {
    std::unordered_map<int, int> maps;

    for (std::size_t i = 0; i < numbers.size(); i++) {
        maps[numbers[i]] = i;
    }

    for (std::size_t i = 0; i < numbers.size(); i++) {
        if (maps.find(target - numbers[i]) != maps.end() && maps[target - numbers[i]] != i) {
            return {maps[target - numbers[i]], i};
        }
    }

    return {0, 0};
}

#include <unordered_map>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int> &numbers, int target) {
    std::unordered_map<int, int> maps;

    for (std::size_t i = 0; i < numbers.size(); i++) {
        if (maps.find(target - numbers[i]) != maps.end()) {
            return {maps[target - numbers[i]], i};
        }

        maps[numbers[i]] = i;
    }

    return {0, 0};
}