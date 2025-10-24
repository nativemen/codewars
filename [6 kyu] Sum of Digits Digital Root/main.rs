fn digital_root(n: i64) -> i64 {
    let mut result = n;

    while result > 9 {
        let mut sum = 0;

        while result != 0 {
            sum += result % 10;
            result /= 10;
        }

        result = sum;
    }

    result
}

fn digital_root(n: i64) -> i64 {
    (n - 1) % 9 + 1
}

fn digital_root(n: i64) -> i64 {
    if n < 10 {
        return n;
    }

    let sum = n
        .to_string()
        .chars()
        .map(|digit| digit.to_digit(10).unwrap() as i64)
        .sum();

    digital_root(sum)
}

fn digital_root(n: i64) -> i64 {
    let mut n = n;
    let mut sum = 0;

    while n != 0 {
        sum += n % 10;
        n /= 10;
    }

    if sum < 10 {
        return sum;
    }

    digital_root(sum)
}
