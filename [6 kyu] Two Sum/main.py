def two_sum(numbers, target):
    for i in range(len(numbers) - 1):
        for j in range(i + 1, len(numbers)):
            if numbers[i] + numbers[j] == target:
                return (i, j)

    return (0, 0)


def two_sum(numbers, target):
    nums = []

    for i, num in enumerate(numbers):
        nums.append((num, i))

    nums.sort()

    left, right = 0, len(nums) - 1

    while left < right:
        sum = nums[left][0] + nums[right][0]

        if sum == target:
            return (nums[left][1], nums[right][1])
        elif sum < target:
            left += 1
        else:
            right -= 1

    return (0, 0)


from collections import defaultdict


def two_sum(numbers, target):
    nums = defaultdict(int)

    for i, num in enumerate(numbers):
        nums[num] = i

    for i, num in enumerate(numbers):
        if target - num in nums and nums[target - num] != i:
            return (nums[target - num], i)

    return (0, 0)


from collections import defaultdict


def two_sum(numbers, target):
    nums = defaultdict(int)

    for i, num in enumerate(numbers):
        if target - num in nums:
            return (nums[target - num], i)

        nums[num] = i

    return (0, 0)
