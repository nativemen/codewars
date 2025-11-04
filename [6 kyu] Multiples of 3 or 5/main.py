def solution(number):
    max3 = (number - 1) // 3
    max5 = (number - 1) // 5
    max15 = (number - 1) // 15

    sum3 = 0 if max3 <= 0 else (1 + max3) * max3 * 3 // 2
    sum5 = 0 if max5 <= 0 else (1 + max5) * max5 * 5 // 2
    sum15 = 0 if max15 <= 0 else (1 + max15) * max15 * 15 // 2

    return sum3 + sum5 - sum15


def solution(number):
    return sum(num for num in range(number) if num % 3 == 0 or num % 5 == 0)


def solution(number):
    return sum(set(range(3, number, 3)) | set(range(5, number, 5)))
