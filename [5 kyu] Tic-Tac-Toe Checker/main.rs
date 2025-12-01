fn is_solved(board: &[&[u8; 3]; 3]) -> i8 {
    fn check(a: u8, b: u8, c: u8) -> i8 {
        if a == b && b == c {
            if a == 0 {
                return -1;
            }

            return a as i8;
        }

        if a == 0 || b == 0 || c == 0 {
            return -1;
        }

        0
    }

    let array = [
        (board[0][0], board[0][1], board[0][2]),
        (board[1][0], board[1][1], board[1][2]),
        (board[2][0], board[2][1], board[2][2]),
        (board[0][0], board[1][0], board[2][0]),
        (board[0][1], board[1][1], board[2][1]),
        (board[0][2], board[1][2], board[2][2]),
        (board[0][0], board[1][1], board[2][2]),
        (board[0][2], board[1][1], board[2][0]),
    ];

    let mut not_finished = 0;

    for line in array {
        let result = check(line.0, line.1, line.2);
        if result > 0 {
            return result;
        }

        if result < 0 {
            not_finished += 1;
        }
    }

    if not_finished != 0 {
        return -1;
    }

    0
}
