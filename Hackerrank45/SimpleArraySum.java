import java.util.List;

public class SimpleArraySum {
    public static int simpleArraySum(List<Integer> ar) {
        int sum = 0;
        // sum = ar.stream().reduce(0, Integer::sum);
        for(int index = 0; index < ar.size(); index++){
            sum += ar.get(index);
        }
        return sum;
    }
    public static void main(String[] args) {
        int sum = simpleArraySum(List.of(1, 2, 3, 4));
        System.out.println(sum);
    }
}
