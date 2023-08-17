import java.util.Scanner;

public class BeautifulDays {
    public static Long reverse(int number){
        String reverseNumberStr = new StringBuilder(String.valueOf(number)).reverse().toString();
        Long reversedNumber = Long.valueOf(reverseNumberStr);
        return reversedNumber;
    }

    public static int beautifulDays(int i, int j, int k) {
        // Write your code here
        int beautifulDaysCount = 0;
        for(int index = i; index <= j; index++){
            if(Math.abs(Long.valueOf(index) - reverse(index)) % k == 0){
                beautifulDaysCount += 1;
            }
        }
        return beautifulDaysCount;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i = scanner.nextInt();
        int j = scanner.nextInt();
        int k = scanner.nextInt();
        int beautifulDaysCount = beautifulDays(i, j, k);
        scanner.close();
        System.out.println(beautifulDaysCount);
    }

}
