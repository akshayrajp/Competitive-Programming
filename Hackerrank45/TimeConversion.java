public class TimeConversion {
    public static String timeConversion(String s) {
        // Write your code here
        String militaryTime = new String();
        int hours = Integer.valueOf(s.substring(0, 2));

        if (s.endsWith("AM")) {
            if (hours == 12) {
                militaryTime = "00".concat(s.substring(2, s.length() - 2));
            } else {
                militaryTime = s.substring(0, s.length() - 2);
            }
        } else {
            militaryTime = String.valueOf(12 + (hours == 12 ? 0 : hours))
                    .concat(s.substring(2, s.length() - 2));
        }

        return militaryTime;

    }

    public static void main(String[] args) {
        String militaryTime = timeConversion("05:05:33PM");
        System.out.println(militaryTime);
    }

}
