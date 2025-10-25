def s(m: int, n: int) -> int:
    if m == 0:
        return 1

    if n == 0:
        return 0

    res = 1

    for i in range(1, m + 1):
        res = res * (n + i - 1) // i

    return res


def s(m: int, n: int) -> int:
    if m == 0:
        return 1

    if n == 0:
        return 0

    k = min(m, n - 1)
    res = 1
    a = m + n - 1

    for i in range(1, k + 1):
        res = res * (a - (i - 1)) // i

    return res
