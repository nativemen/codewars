public class GrassHopper {

    public static String weatherInfo(int temp) {
        double c = convertToCelsius(temp);
        if (c <= 0.0) {
            return Double.toString(c) + " is freezing temperature";
        } else {
            return Double.toString(c) + " is above freezing temperature";
        }
    }

    public static double convertToCelsius(int temp) {
        return ((double) temp - 32.0) * 5.0 / 9.0;

    }
}