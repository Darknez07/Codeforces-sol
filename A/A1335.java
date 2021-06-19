import java.util.Scanner;

public class A1335 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int ans;
        while(t--!=0){
            ans = input.nextInt();
            if(ans % 2 == 0)
                ans = ans/2 - 1;
            else
                ans/=2;
            System.out.println(ans);
        }
        input.close();
    }
}
