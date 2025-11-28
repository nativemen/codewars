// Returns number of complete beeramid levels
int beeramid(int bonus, double price) {
    if (bonus <= 0.0) {
        return 0;
    }

    int total = 0;
    int level = 0;

    while (total <= bonus) {
        level++;
        total += price * level * level;
    }

    return level - 1;
}