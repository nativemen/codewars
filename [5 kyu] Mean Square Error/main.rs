pub fn solution(array_a: &[i64], array_b: &[i64]) -> f64 {
    if array_a.is_empty() {
        return 0.0;
    }

    array_a
        .iter()
        .zip(array_b.iter())
        .map(|(a, b)| (a - b).pow(2) as f64)
        .sum::<f64>()
        / array_a.len() as f64
}
