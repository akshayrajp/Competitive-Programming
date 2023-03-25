import java.util.List;

public class aVeryBigSum {
    public static long aVeryBigSum(List<Long> ar) {
        // Write your code here
        
        Long sum = 0L;
        
        sum = ar.stream().reduce(0L, Long::sum);
        // for (int index = 0; index < ar.size(); index++) {
        //     sum += ar.get(index);
        // }

        return sum;
    }

    public static void main(String[] args) {

    }

}
