def solution(s):
    result = []
    for i in range(0, len(s), 2):
        result.append(s[i : i + 2])

    if len(s) % 2 != 0:
        result[-1] += "_"

    return result


def solution(s):
    if len(s) % 2 != 0:
        s += "_"

    return [s[i : i + 2] for i in range(0, len(s), 2)]
