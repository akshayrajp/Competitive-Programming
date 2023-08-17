import java.util.List;

public class BirthdayCakeCandles {
    public static int birthdayCakeCandles(List<Integer> candles) {
        // Write your code here
        Integer tallestCandlesCount = 0, tallestCandleHeight = 0;

        for(int index = 0; index < candles.size(); index++){
            if(candles.get(index) > tallestCandleHeight){
                tallestCandleHeight = candles.get(index);
            }
        }

        for(int index = 0; index < candles.size(); index++){
            if(candles.get(index).equals(tallestCandleHeight)){
                tallestCandlesCount++;
            }
        }

        return tallestCandlesCount;
    }

    public static void main(String[] args) {
        List<Integer> candles = List.of(2, 4, 3, 4);
        int count = birthdayCakeCandles(candles);
        System.out.println(count);
    }

}
