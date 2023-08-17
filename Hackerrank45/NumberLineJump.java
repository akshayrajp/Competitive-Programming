public class NumberLineJump {
    /*
     * Complete the 'kangaroo' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     * 1. INTEGER x1
     * 2. INTEGER v1
     * 3. INTEGER x2
     * 4. INTEGER v2
     */

    public static String kangaroo(int x1, int v1, int x2, int v2) {
        // Write your code here

        // The question states that x2 > x1,
        // which means that the second kangaroo (k2) will always start ahead of the
        // first kangaroo (k1)
        // With that said, if v2 >= v1, then the k1 will never catch up to k2
        // because k2 will always be ahead of k1 on the number line
        // which means for k1 to be able to catch up to k2, v1 > v2

        String willKangaroosMeet = "";

        if (v2 >= v1) {
            willKangaroosMeet = "NO";
        } else {
            // Now consider the following: if at some point in the number line, 
            // k1 does catch up to k2,
            // we can say that (x1 + n*v1) = (x2 + n*v2), where n = number of jumps
            // (x1 - x2) = n * (v2 - v1)
            // (x1 - x2) / (v2 - v1) = n
            // which is to say, that if (x1 - x2) can be evenly divided by (v2 - v1), 
            // then the kangaroos will meet
            if ((x1 - x2) % (v2 - v1) == 0) {
                willKangaroosMeet = "YES";
            }
        }
        return willKangaroosMeet;
    }

    public static void main(String[] args) {

    }
}