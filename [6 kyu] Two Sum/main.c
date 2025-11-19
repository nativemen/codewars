#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    unsigned index;
} Num;

static int compare(const void *a, const void *b) {
    return ((const Num *)a)->num - ((const Num *)b)->num;
}

void twoSum(unsigned count, const int numbers[count], int target, unsigned *index1, unsigned *index2) {
    *index1 = 0;
    *index2 = 0;

    Num *nums = (Num *)malloc(count * sizeof(Num));
    if (nums == NULL) {
        return;
    }

    for (unsigned i = 0; i < count; i++) {
        nums[i].num = numbers[i];
        nums[i].index = i;
    }

    qsort(nums, count, sizeof(Num), compare);

    int left = 0;
    int right = (int)count - 1;

    while (left < right) {
        int sum = nums[left].num + nums[right].num;

        if (sum < target) {
            left++;
        } else if (sum > target) {
            right--;
        } else {
            *index1 = nums[left].index;
            *index2 = nums[right].index;
            return;
        }
    }
}

void twoSum(unsigned count, const int numbers[count], int target, unsigned *index1, unsigned *index2) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] + numbers[j] == target) {
                *index1 = i;
                *index2 = j;
                return;
            }
        }
    }

    *index1 = 0;
    *index2 = 0;
}