public class Kata {

    public static int[][] matrixMultiplication(int[][] a, int[][] b) {
        int n = a.length;
        int[][] result = new int[n][n];

        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < n; j += 1) {
                result[i][j] = 0;
                for (int k = 0; k < n; k += 1) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        return result;
    }
}
