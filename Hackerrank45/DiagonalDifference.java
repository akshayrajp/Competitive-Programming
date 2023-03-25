import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class DiagonalDifference {
    public static int diagonalDifference(List<List<Integer>> arr) {
        // Given a square matrix, calculate the absolute difference between the sums of
        // its diagonals.
        // Write your code here

        // Diagonals in a square matrix go from top-left to bottom-right and
        // from top-right to bottom-left

        int topLeftToBottomRightDiagonalSum = 0, topRightToBottomLeftDiagonalSum = 0;

        // Since it is a square matrix, the number of columns = number of rows
        int sizeOfSquareMatrix = arr.size();

        // elements that lie on the top-left to bottom-right diagonal have the following
        // coordinates:
        // For a square matrix of size 3: arr[0][0], arr[1][1], arr[2][2]
        for (int index = 0; index < sizeOfSquareMatrix; index++) {
            topLeftToBottomRightDiagonalSum += arr.get(index).get(index);
        }

        // elements that lie on the top-right to bottom-left diagonal have the following
        // coordinates:
        // For a square matrix of size 3: arr[0][2], arr[1][1], arr[2][0]...
        // The same can be written as arr[0][3-1-0], arr[1][3-1-1], arr[2][3-1-2]
        for (int index = 0; index < sizeOfSquareMatrix; index++) {
            topRightToBottomLeftDiagonalSum += arr.get(index).get(sizeOfSquareMatrix - 1 - index);
        }

        int diagonalDifference = Math.abs(topLeftToBottomRightDiagonalSum - topRightToBottomLeftDiagonalSum);
        return diagonalDifference;
    }

    public static void main(String[] args) {
        int sizeOfSquareMatrix;
        Scanner scanner = new Scanner(System.in);
        sizeOfSquareMatrix = scanner.nextInt();

        List<List<Integer>> matrix = new ArrayList<>();
        for (int index = 0; index < sizeOfSquareMatrix; index++) {
            List<Integer> row = new ArrayList<>();
            for (int index1 = 0; index1 < sizeOfSquareMatrix; index1++) {
                int element = scanner.nextInt();
                row.add(element);
            }
            matrix.add(row);
        }
        scanner.close();

        int diagonalDifference = diagonalDifference(matrix);
        System.out.println("Diagonal difference: " + diagonalDifference);
    }

}
