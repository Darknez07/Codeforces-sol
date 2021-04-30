import java.util.Scanner;

public class B1374 {
    static long f = 0;
    public static boolean Find(long n){
        if(n == 1)
            return true;
        if(n % 6 == 0){
            f++;
            return Find(n / 6);
        }
        else if(n % 3 == 0){
            f++;
            return Find(n*2);
        }
        else
            return false;
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
                System.out.println(f);
            else
                System.out.println(-1);
        }
        input.close();
    }
}
