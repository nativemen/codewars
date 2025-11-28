fn snail(matrix: &[Vec<i32>]) -> Vec<i32> {
    let mut result = Vec::new();
    let row = matrix.len();
    if row == 0 {
        return result;
    }

    let col = matrix[0].len();
    if col == 0 {
        return result;
    }

    let total = row * col;
    let mut left = 0;
    let mut right = col as i32 - 1;
    let mut top = 0;
    let mut bottom = row as i32 - 1;

    while result.len() < total {
        for i in left..=right {
            result.push(matrix[top as usize][i as usize]);
        }
        top += 1;

        for i in top..=bottom {
            result.push(matrix[i as usize][right as usize]);
        }
        right -= 1;

        for i in (left..=right).rev() {
            result.push(matrix[bottom as usize][i as usize]);
        }
        bottom -= 1;

        for i in (top..=bottom).rev() {
            result.push(matrix[i as usize][left as usize]);
        }
        left += 1;
    }

    result
}
