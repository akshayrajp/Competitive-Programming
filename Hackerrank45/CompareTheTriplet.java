import java.util.ArrayList;
import java.util.List;

public class CompareTheTriplet {
    public static List<Integer> compareTriplets(List<Integer> a, List<Integer> b) {
        List<Integer> comparisonPoints = new ArrayList<>();
        int alicePoints = 0, bobPoints = 0;

        for(int index = 0; index < 3; index++){
            if(a.get(index) > b.get(index)){
                alicePoints += 1;
            }
            else if(b.get(index) > a.get(index)){
                bobPoints += 1;
            }
        }

        comparisonPoints.add(alicePoints);
        comparisonPoints.add(bobPoints);
        return comparisonPoints;
    }

    public static void main(String[] args) {
        List<Integer> a = List.of(1, 2, 3);
        List<Integer> b = List.of(3, 2, 1);

        List<Integer> comparisonPoints = compareTriplets(a, b);
        comparisonPoints.forEach(comparisonPoint -> System.out.print(comparisonPoint + " "));
    }

}
