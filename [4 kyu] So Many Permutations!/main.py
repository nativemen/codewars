import itertools


def permutations(s):
    return ["".join(p) for p in set(itertools.permutations(s))]


def permutations(s):
    def permute(prefix, remain):
        nonlocal sets

        if not remain:
            sets.add(prefix)
            return

        for i in range(len(remain)):
            permute(prefix + remain[i], remain[:i] + remain[i + 1 :])

    sets = set()

    permute("", s)

    return list(sets)
