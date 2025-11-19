public class Solution {

    public static double solution(int[] arr1, int[] arr2) {
        if (arr1.length == 0) {
            return 0.0;
        }

        double sum = 0.0;

        for (int i = 0; i < arr1.length; i++) {
            sum += (arr1[i] - arr2[i]) * (arr1[i] - arr2[i]);
        }

        return sum / arr1.length;
    }
}

public class Solution {

    public static double solution(int[] arr1, int[] arr2) {
        if (arr1.length == 0) {
            return 0.0;
        }

        double sum = 0.0;

        for (int i = 0; i < arr1.length; i++) {
            sum += Math.pow(arr1[i] - arr2[i], 2);
        }

        return sum / arr1.length;
    }
}
