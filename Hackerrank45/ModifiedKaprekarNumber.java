import java.util.ArrayList;
import java.util.List;

public class ModifiedKaprekarNumber {
    public static void kaprekarNumbers(int p, int q) {
        List<Integer> kaprekarNumbersList = new ArrayList<>();
        // Write your code here
        for (int index = p; index <= q; index++) {

            Integer originalLength = String.valueOf(index).length();
            Long square = Long.valueOf(index) * Long.valueOf(index);
            String squaredString = String.valueOf(square);

            String rightSubstring = squaredString.substring(
                    squaredString.length() - originalLength,
                    squaredString.length());

            String leftSubstring = squaredString.replace(rightSubstring, "");
            Integer leftValue = leftSubstring.equals("") ? 0 : Integer.valueOf(leftSubstring);
            Integer rightValue = rightSubstring.equals("") ? 0 : Integer.valueOf(rightSubstring);

            if (leftValue + rightValue == index) {
                kaprekarNumbersList.add(index);
            }
        }
        if (kaprekarNumbersList.size() == 0) {
            System.out.println("INVALID RANGE");
        } else {
            kaprekarNumbersList.forEach(kaprekarNumber -> {
                System.out.print(kaprekarNumber + " ");
            });
            System.out.println();
        }

    }

    public static void main(String[] args) {
        kaprekarNumbers(1, 100);
    }

}
