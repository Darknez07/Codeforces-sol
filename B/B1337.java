import java.util.Scanner;

public class B1337 {
    public static boolean Do(long n, int a ,int b){
        if(n <= 0)
            return true;
        else if(n <= 10 && b!=0)
            return true;
        else if(a!=0)
            return Do(n/2 + 10, a - 1, b);
        else if(b!=0)
            return Do(n - 10, a, b - 1);
        else
            return false;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n;
        int a,b;
        boolean ans;
        while(t--!=0){
            n = input.nextLong();
            a = input.nextInt();
            b = input.nextInt();
            ans = Do(n,a,b);
            if(ans)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        input.close();
    }
}
