import java.util.Scanner;
// Good Code
// Help to find the two primes
// nearest to some values;
public class B1474{
    public static long primes(long a){
        boolean temp;
        while(true){
            temp = false;
            for(long i=2;i * i <= a; i++){
                if(a % i == 0){
                    temp =true;
                    break;
                }
            }
            if(temp)
                a++;
            else
                break;
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        long a,b;
        long ans;
        while(t--!=0){
            n = input.nextInt();
            a = primes(n + 1);
            b = primes(a + n);
            ans = a*b;
            System.out.println(ans);
        }
        input.close();
    }
}