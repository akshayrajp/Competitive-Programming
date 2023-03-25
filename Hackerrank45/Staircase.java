public class Staircase {

    public static void staircase(int n) {
        // Write your code here
        for(int rows = 1; rows <= n; rows++){
            // For each row, we have to print ('n' - 'rows') spaces and 'rows' number of '#'s.
            for(int columns = 1; columns <= (n - rows); columns++){
                System.out.print(" ");
            }
            for(int columns = 1; columns <= rows; columns++){
                System.out.print("#");
            }
            System.out.println();
        }

    }

    public static void main(String[] args) {
        staircase(4);
    }
}