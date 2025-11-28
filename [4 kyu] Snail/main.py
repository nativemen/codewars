def snail(snail_map):
    result = []
    row = len(snail_map)
    if row == 0:
        return result

    col = len(snail_map[0])
    if col == 0:
        return result

    total = row * col
    left, right = 0, col - 1
    top, bottom = 0, row - 1

    while len(result) < total:
        for i in range(left, right + 1):
            result.append(snail_map[top][i])
        top += 1

        for i in range(top, bottom + 1):
            result.append(snail_map[i][right])
        right -= 1

        for i in range(right, left - 1, -1):
            result.append(snail_map[bottom][i])
        bottom -= 1

        for i in range(bottom, top - 1, -1):
            result.append(snail_map[i][left])
        left += 1

    return result


def snail(snail_map):
    result = []

    while snail_map:
        result.extend(snail_map.pop(0))

        for row in snail_map:
            result.append(row.pop())

        if snail_map:
            result.extend(snail_map.pop()[::-1])

        for row in snail_map[::-1]:
            result.append(row.pop(0))

    return result
