fn beeramid (bonus: i32, price: f32) -> usize {
    if bonus <= 0 {
        return 0;
    }

    let mut total = 0.0;
    let mut level = 0;

    while total <= bonus as f32 {
        level += 1;
        total += price * level as f32 * level as f32;
    }

    level - 1
}