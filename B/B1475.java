import java.util.Scanner;

public class B1475 {
    static int f = 0;
    public static boolean Find(long n){
        if(n == 0)
            return true;
        else if(n > 2020){
            f++;
            return Find(n - 2020);
        }
        else if(n % 2020 > f)
            return false;
        else
            return true;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n;
        boolean ans;
        while(t--!=0){
            n = input.nextLong();
            f = 0;
            ans = Find(n);
            if(ans)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        input.close();
    }
}
