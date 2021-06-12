import java.util.Scanner;

public class A1213 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] coins = new int[2];
        long a;
        while(n--!=0){
            a = input.nextLong();
            coins[(int)a % 2]++;
        }
        input.close();
        if(coins[0] == 0 || coins[1] == 0)
            System.out.println(0);
        else
            System.out.println(Math.min(coins[0], coins[1]));
    }
}
