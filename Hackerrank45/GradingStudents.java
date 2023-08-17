import java.util.ArrayList;
import java.util.List;

public class GradingStudents {
    public static List<Integer> gradingStudents(List<Integer> grades) {
        // Write your code here
        List<Integer> finalGrades = new ArrayList<>();

        grades.forEach(grade -> {
            if (grade < 38) {
                finalGrades.add(grade);
            } else {
                // If the difference between any grade >= 38 and the next multiple of 5 is < 3,
                // then round the grade up to the next multiple of 5
                if (grade % 5 == 0) {
                    finalGrades.add(grade);
                } else {
                    int quotient = grade / 5;
                    int nextMultipleOfFive = (quotient + 1) * 5;
                    if (nextMultipleOfFive - grade < 3) {
                        finalGrades.add(nextMultipleOfFive);
                    } else {
                        finalGrades.add(grade);
                    }
                }

            }
        });

        return finalGrades;
    }

    public static void main(String[] args) {
        List<Integer> grades = List.of(73, 67, 38, 33);
        List<Integer> finalGrades = gradingStudents(grades);

        finalGrades.forEach(finalGrade -> {
            System.out.println(finalGrade);
        });

    }
}