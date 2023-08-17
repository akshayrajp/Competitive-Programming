import java.util.List;

public class PlusMinus {
    public static void plusMinus(List<Integer> arr) {
        // Write your code here

        // Given an array of integers, calculate the ratios of its elements that are
        // positive, negative, and zero. Print the decimal value of each fraction on a
        // new line with places after the decimal.

        /*
         * Solution using streams:
         * 
         * Double totalCountOfElements = Double.valueOf(arr.size());
         * 
         * Double countOfPositiveElements = Double.valueOf(arr.stream()
         * .filter(element -> element > 0)
         * .collect(Collectors.toList())
         * .size());
         * 
         * Double countOfNegativeElements = Double.valueOf(arr.stream()
         * .filter(element -> element < 0)
         * .collect(Collectors.toList())
         * .size());
         * 
         * Double countOfZeroes = Double.valueOf(arr.stream()
         * .filter(element -> element == 0)
         * .collect(Collectors.toList())
         * .size());
         * 
         * Double proportionOfPositiveValues = countOfPositiveElements /
         * totalCountOfElements;
         * Double proportionOfNegativeValues = countOfNegativeElements /
         * totalCountOfElements;
         * Double proportionOfZeroes = countOfZeroes / totalCountOfElements;
         * 
         * System.out.printf("%.6f\n", proportionOfPositiveValues);
         * System.out.printf("%.6f\n", proportionOfNegativeValues);
         * System.out.printf("%.6f\n", proportionOfZeroes);
         */

        Integer positiveCount = 0, negativeCount = 0, zeroCount = 0;
        Integer totalCount = arr.size();

        for (int index = 0; index < totalCount; index++) {
            if (arr.get(index) < 0) {
                negativeCount += 1;
            } else if (arr.get(index) > 0) {
                positiveCount += 1;
            } else {
                zeroCount += 1;
            }
        }

        Float positiveCountRatio = positiveCount.floatValue() / totalCount.floatValue();
        Float negativeCountRatio = negativeCount.floatValue() / totalCount.floatValue();
        Float zeroCountRatio = zeroCount.floatValue() / totalCount.floatValue();

        System.out.printf("%.6f\n", positiveCountRatio);
        System.out.printf("%.6f\n", negativeCountRatio);
        System.out.printf("%.6f\n", zeroCountRatio);
    }

    public static void main(String[] args) {
        plusMinus(List.of(-4, 3, -9, 0, 4, 1));
    }

}
