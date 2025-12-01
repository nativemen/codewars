enum game_state { NOT_FINISHED = -1, DRAW = 0, X_WON = 1, O_WON = 2 };

enum square { EMPTY = 0, X = 1, O = 2 };

static enum game_state check(enum square a, enum square b, enum square c) {
    if (a == b && b == c) {
        if (a == EMPTY) {
            return NOT_FINISHED;
        } else if (a == X) {
            return X_WON;
        } else {
            return O_WON;
        }
    } else {
        if (a == EMPTY || b == EMPTY || c == EMPTY) {
            return NOT_FINISHED;
        } else {
            return DRAW;
        }
    }
}

enum game_state check_game_state(const enum square board[3][3]) {
    const enum square array[][3] = {
            {board[0][0], board[0][1], board[0][2]},
            {board[1][0], board[1][1], board[1][2]},
            {board[2][0], board[2][1], board[2][2]},
            {board[0][0], board[1][0], board[2][0]},
            {board[0][1], board[1][1], board[2][1]},
            {board[0][2], board[1][2], board[2][2]},
            {board[0][0], board[1][1], board[2][2]},
            {board[0][2], board[1][1], board[2][0]},
    };

    int not_finished = 0;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        enum game_state result = check(array[i][0], array[i][1], array[i][2]);
        if (result == X_WON || result == O_WON) {
            return result;
        }

        if (result == NOT_FINISHED) {
            not_finished++;
        }
    }

    if (not_finished != 0) {
        return NOT_FINISHED;
    }

    return DRAW;
}