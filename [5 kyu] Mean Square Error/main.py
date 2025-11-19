def solution(array_a, array_b):
    if not array_a:
        return 0.0

    sum = 0.0

    for i in range(len(array_a)):
        sum += (array_a[i] - array_b[i]) ** 2

    return sum / len(array_a)


def solution(array_a, array_b):
    if not array_a:
        return 0.0

    return sum((x - y) ** 2 for x, y in zip(array_a, array_b)) / len(array_a)
