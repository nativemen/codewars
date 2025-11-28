def beeramid(bonus, price):
    if bonus <= 0:
        return 0

    total = 0
    level = 0

    while total <= bonus:
        level += 1
        total += price * level * level

    return level - 1
