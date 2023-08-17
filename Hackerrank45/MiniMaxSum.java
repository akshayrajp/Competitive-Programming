import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.stream.Collectors;

public class MiniMaxSum {
    public static void miniMaxSum(List<Integer> arr) {
        // Write your code here

        // Given five positive integers, find the minimum and maximum values
        // that can be calculated by summing exactly four of the five integers.
        // Then print the respective minimum and maximum values as a single line
        // of two space-separated long integers.

        List<Long> ascSortedArray = arr.stream()
                .mapToLong(element -> element)
                .mapToObj(Long::valueOf)
                .collect(Collectors.toList());
        ascSortedArray.sort(Comparator.naturalOrder());

        Long minimumSum = ascSortedArray.subList(0, 4)
                .stream()
                .reduce(0L, Long::sum);

        List<Long> descSortedArray = arr.stream()
                .mapToLong(element -> element)
                .mapToObj(Long::valueOf)
                .collect(Collectors.toList());
        descSortedArray.sort(Comparator.reverseOrder());

        Long maximumSum = descSortedArray.subList(0, 4)
                .stream()
                .reduce(0L, Long::sum);

        System.out.print(minimumSum + " " + maximumSum);
    }

    public static void main(String[] args) {
        List<Integer> arr = List.of(1, 3, 5, 7, 9);
        miniMaxSum(arr);
    }

}
