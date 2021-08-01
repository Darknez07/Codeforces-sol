import java.util.Scanner;

public class A199 {
    public static long[] memo;
    public static long Fib(int n){
        if(n <= 1)
            return n;
        if(n !=0 && memo[n]!=0)
            return memo[n];
        else
            memo[n] = Fib(n - 1) + Fib(n - 2);
        return memo[n];
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        int i;
        input.close();
        boolean no = false;
        long one,two;
        memo = new long[100];
        for(i=1;i<=100;i++){
            if(Fib(i) >= n)
                break;
        }
        one = Fib(i - 1);
        n-=one;
        for(i=1;i<=100;i++){
            if(Fib(i) >= n)
                break;
        }
        two = Fib(i - 1);
        n-=two;
        for(i=0;i<=100;i++){
            if(Fib(i) > n){
                no = true;
                break;
            }
            if(Fib(i) == n){
                break;
            }
        }
        if(no){
            System.out.println("I'm too stupid to solve this problem");
        }else{
            System.out.println(n+" "+two+" "+one);
        }
    }
}
