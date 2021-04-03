import java.util.Scanner;

public class B1257 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,m;
        while(t--!=0){
            n =input.nextInt();
            m = input.nextInt();
            if(m <= n)
                System.out.println("YES");
            else if(n == 1 && m != 1)
                System.out.println("NO");
            else if(n <= 3 && m >= 4)
                System.out.println("NO");
            else
                System.out.println("YES");
        }
        input.close();
    }
}
