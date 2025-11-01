fn max_sequence(seq: &[i32]) -> i32 {
    let mut sum = 0;
    let mut max = 0;

    for &val in seq.iter() {
        sum = if sum + val < 0 { 0 } else { sum + val };
        max = if sum > max { sum } else { max }
    }

    max
}

fn max_sequence(seq: &[i32]) -> i32 {
    let mut sum = 0;
    let mut max = 0;

    for &val in seq.iter() {
        sum = (sum + val).max(0);
        max = sum.max(max);
    }

    max
}
