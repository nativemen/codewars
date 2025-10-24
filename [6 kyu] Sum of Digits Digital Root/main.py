def digital_root(n):
    result = n

    while result > 9:
        sum = 0

        while result != 0:
            sum += result % 10
            result //= 10

        result = sum

    return result


def digital_root(n):
    return (n - 1) % 9 + 1 if n else 0


def digital_root(n):
    while len(str(n)) > 1:
        n = sum([int(c) for c in str(n)])

    return n


def digital_root(n):
    while len(str(n)) > 1:
        n = sum(map(int, str(n)))

    return n


def digital_root(n):
    sum = 0

    while n != 0:
        sum += n % 10
        n //= 10

    return sum if sum < 10 else digital_root(sum)
