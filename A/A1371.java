import java.util.Scanner;

public class A1371{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int val;
        int ans = 1;
        for(int i=0;i<n;i++){
            val = input.nextInt();
            if(val == 1 || val == 2)
                System.out.println(ans);
            else
                System.out.println(val % 2 != 0 ? val/2 + 1: val/2);
        }
        input.close();
    }
}