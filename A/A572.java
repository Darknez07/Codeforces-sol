import java.util.Scanner;

public class A572 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int nA = input.nextInt();
        int nB = input.nextInt();
        int k = input.nextInt();
        int m = input.nextInt();
        int low = 0,temp,high = 0;
        for(int i=0;i<nA;i++){
            temp = input.nextInt();
            // Taking the last element from start
            if(i == k - 1){low = temp;}
        }
        for(int i=0;i<nB;i++){
            temp = input.nextInt();
            // Taking mth element from last;
            if(i == nB - m){high = temp;}
        }
        System.out.println((high > low) ? "YES":"NO ");
        input.close();
    }
}
