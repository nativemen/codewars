def is_solved(board):
    def check(a, b, c) -> int:
        if a == b and b == c:
            if a == 0:
                return -1

            return a
        else:
            if a == 0 or b == 0 or c == 0:
                return -1

            return 0

    array = [
        [board[0][0], board[0][1], board[0][2]],
        [board[1][0], board[1][1], board[1][2]],
        [board[2][0], board[2][1], board[2][2]],
        [board[0][0], board[1][0], board[2][0]],
        [board[0][1], board[1][1], board[2][1]],
        [board[0][2], board[1][2], board[2][2]],
        [board[0][0], board[1][1], board[2][2]],
        [board[0][2], board[1][1], board[2][0]],
    ]

    not_finished = 0

    for list in array:
        result = check(list[0], list[1], list[2])
        if result > 0:
            return result

        if result < 0:
            not_finished += 1

    if not_finished != 0:
        return -1

    return 0
