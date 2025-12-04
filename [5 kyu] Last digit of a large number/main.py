def last_digit(n1, n2):
    if n2 == 0:
        return 1

    a = n1 % 10
    b = (n2 % 100) % 4
    if b == 0:
        b = 4
    result = 1

    for i in range(1, b + 1):
        result = (a * result) % 10

    return result


def last_digit(n1, n2):
    if n2 == 0:
        return 1

    a = n1 % 10
    b = (n2 % 100) % 4
    maps = {
        0: [0, 0, 0, 0],
        1: [1, 1, 1, 1],
        2: [6, 2, 4, 8],
        3: [1, 3, 9, 7],
        4: [6, 4, 6, 4],
        5: [5, 5, 5, 5],
        6: [6, 6, 6, 6],
        7: [1, 7, 9, 3],
        8: [6, 8, 4, 2],
        9: [1, 9, 1, 9],
    }

    return maps[a][b]
