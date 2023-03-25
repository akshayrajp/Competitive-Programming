import java.util.List;

public class AppleAndOrange {
    /*
     * Complete the 'countApplesAndOranges' function below.
     *
     * The function accepts following parameters:
     * 1. INTEGER s
     * 2. INTEGER t
     * 3. INTEGER a
     * 4. INTEGER b
     * 5. INTEGER_ARRAY apples
     * 6. INTEGER_ARRAY oranges
     */

    public static void countApplesAndOranges(int s, int t, int a, int b, List<Integer> apples, List<Integer> oranges) {
        // Write your code here
        int samsApples = 0, samsOranges = 0;

        for (int index = 0; index < apples.size(); index++) {
            int appleCoordinate = apples.get(index) + a;
            if (appleCoordinate >= s && appleCoordinate <= t) {
                samsApples += 1;
            }
        }

        for (int index = 0; index < oranges.size(); index++) {
            int orangeCoordinate = oranges.get(index) + b;
            if (orangeCoordinate >= s && orangeCoordinate <= t) {
                samsOranges += 1;
            }
        }

        System.out.println(samsApples);
        System.out.println(samsOranges);
    }

    public static void main(String[] args) {
        countApplesAndOranges(7, 11, 5, 15, List.of(-2, 2, 1), List.of(5, -6));
    }

}
