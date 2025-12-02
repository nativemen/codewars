def matrix_mult(a: list[list[int]], b: list[list[int]]) -> list[list[int]]:
    n = len(a)

    result = [[0 for _ in range(n)] for _ in range(n)]

    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] += a[i][k] * b[k][j]

    return result
