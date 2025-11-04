fn solution(num: i32) -> i32 {
    let cnt3 = (num as i64 - 1) / 3;
    let cnt5 = (num as i64 - 1) / 5;
    let cnt15 = (num as i64 - 1) / 15;

    let sum3 = if cnt3 <= 0 {
        0
    } else {
        (1 + cnt3) * cnt3 * 3 / 2
    };

    let sum5 = if cnt5 <= 0 {
        0
    } else {
        (1 + cnt5) * cnt5 * 5 / 2
    };

    let sum15 = if cnt15 <= 0 {
        0
    } else {
        (1 + cnt15) * cnt15 * 15 / 2
    };

    (sum3 + sum5 - sum15) as i32
}

fn solution(num: i32) -> i32 {
    (1..num).filter(|n| n % 3 == 0 || n % 5 == 0).sum()
}
