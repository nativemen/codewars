def in_array(array1, array2):
    result = []
    for s1 in array1:
        for s2 in array2:
            if s1 in s2:
                if s1 not in result:
                    result.append(s1)
                break

    result.sort()

    return result


def in_array(array1, array2):
    result = set()

    for s1 in array1:
        for s2 in array2:
            if s1 in s2:
                result.add(s1)
                break

    return sorted(result)


def in_array(array1, array2):
    return sorted(set(s1 for s1 in array1 for s2 in array2 if s1 in s2))


def in_array(array1, array2):
    return sorted(set(s1 for s1 in array1 if any(s1 in s2 for s2 in array2)))


def in_array(array1, array2):
    return sorted(set(s1 for s1 in array1 if s1 in " ".join(array2)))
