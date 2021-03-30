import java.util.Scanner;

public class B268 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int ans = 0;
        if(n == 1)
            System.out.println(1);
        else{
            for(int i = 1; i < n; i++){
                ans+=(i*(n-i));
            }
            System.out.println(ans+n);
        }
        input.close();
    }
}
