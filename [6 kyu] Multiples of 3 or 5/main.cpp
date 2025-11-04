int solution(int number) {
    long long max3 = (number - 1) / 3;
    long long max5 = (number - 1) / 5;
    long long max15 = (number - 1) / 15;

    long long sum3 = (max3 <= 0) ? 0 : ((1 + max3) * max3 * 3 / 2);
    long long sum5 = (max5 <= 0) ? 0 : ((1 + max5) * max5 * 5 / 2);
    long long sum15 = (max15 <= 0) ? 0 : ((1 + max15) * max15 * 15 / 2);

    return (int)(sum3 + sum5 - sum15);
}

int solution(int number) {
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}