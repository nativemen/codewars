
public class Solution {

    static int check(int a, int b, int c) {
        if (a == b && b == c) {
            if (a == 0) {
                return -1;
            }

            return a;
        }

        if (a == 0 || b == 0 || c == 0) {
            return -1;
        }

        return 0;
    }

    public static int isSolved(int[][] board) {
        int[][] array = {
            {board[0][0], board[0][1], board[0][2]},
            {board[1][0], board[1][1], board[1][2]},
            {board[2][0], board[2][1], board[2][2]},
            {board[0][0], board[1][0], board[2][0]},
            {board[0][1], board[1][1], board[2][1]},
            {board[0][2], board[1][2], board[2][2]},
            {board[0][0], board[1][1], board[2][2]},
            {board[0][2], board[1][1], board[2][0]}
        };

        int not_finished = 0;

        for (int[] line : array) {
            int result = check(line[0], line[1], line[2]);
            if (result == 1 || result == 2) {
                return result;
            }

            if (result == -1) {
                not_finished += 1;
            }
        }

        if (not_finished != 0) {
            return -1;
        }

        return 0;
    }

}
