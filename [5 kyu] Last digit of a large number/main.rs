fn last_digit(str1: &str, str2: &str) -> i32 {
    if str2.eq("0") {
        return 1;
    }

    let a = str1
        .chars()
        .last()
        .map(|c| c.to_digit(10).unwrap())
        .unwrap();
    let mut b = str2
        .chars()
        .last()
        .map(|c| c.to_digit(10).unwrap())
        .unwrap();
    let len2 = str2.len();

    if len2 > 1 {
        b += str2
            .chars()
            .nth(len2 - 2)
            .map(|c| c.to_digit(10).unwrap())
            .unwrap()
            * 10;
    }

    b %= 4;
    if b == 0 {
        b = 4;
    }

    let mut result = 1;

    for _ in 1..=b {
        result = (a * result) % 10;
    }

    result as i32
}

fn last_digit(str1: &str, str2: &str) -> i32 {
    if str2.eq("0") {
        return 1;
    }

    let a = str1[str1.len().saturating_sub(1)..].parse::<i32>().unwrap();
    let mut b = str2[str2.len().saturating_sub(2)..].parse::<i32>().unwrap() % 4;
    if b == 0 {
        b = 4;
    }

    let mut result = 1;

    for _ in 1..=b {
        result = (a * result) % 10;
    }

    result as i32
}

fn last_digit(str1: &str, str2: &str) -> i32 {
    const MAPS: [[i32; 4]; 10] = [
        [0, 0, 0, 0],
        [1, 1, 1, 1],
        [6, 2, 4, 8],
        [1, 3, 9, 7],
        [6, 4, 6, 4],
        [5, 5, 5, 5],
        [6, 6, 6, 6],
        [1, 7, 9, 3],
        [6, 8, 4, 2],
        [1, 9, 1, 9],
    ];

    if str2.eq("0") {
        return 1;
    }

    let a = str1[str1.len().saturating_sub(1)..]
        .parse::<usize>()
        .unwrap();
    let b = str2[str2.len().saturating_sub(2)..]
        .parse::<usize>()
        .unwrap()
        % 4;

    MAPS[a][b]
}
