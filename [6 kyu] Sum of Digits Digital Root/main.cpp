using namespace std;

int digital_root(int n) {
    int result = n;

    while (result / 10 != 0) {
        int temp = 0;
        while (result != 0) {
            temp += result % 10;
            result /= 10;
        }

        result = temp;
    }

    return result;
}

int digital_root(int n) {
    return --n % 9 + 1;
}

int digital_root(int n) {
    if (n < 10) {
        return n;
    }

    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return digital_root(sum);
}

int digital_root(int n) {
    int sum = 0;

    do {
        sum += n % 10;
        n /= 10;
    } while (n != 0);

    return (sum < 10) ? sum : digital_root(sum);
}