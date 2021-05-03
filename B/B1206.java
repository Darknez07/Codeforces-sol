import java.util.Scanner;

public class B1206 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long coins = 0,num;
        boolean zero = false;
        int negs = 0;
        for(int i=0;i<n;i++){
            num = input.nextLong();
            if(num == 0){coins++; zero=true;}
            else if(num < 0){coins+=(-num - 1);++negs;}
            else if(num > 0){coins+=(num - 1);}
        }
        coins += (2*(zero ? 0: 1)*(negs % 2));
        input.close();
        System.out.println(coins);
    }
}
