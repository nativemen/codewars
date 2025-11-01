def max_sequence(arr):
    sum = 0
    max = 0

    for val in arr:
        sum = 0 if sum + val < 0 else sum + val
        max = sum if sum > max else max

    return max
