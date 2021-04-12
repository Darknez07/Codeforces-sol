import java.util.Scanner;

public class A472 {
    public static boolean isPrime(int a){
        int n = (int)Math.sqrt(a);
        for(int i=2;i<=n;i++)
            if(a % i == 0)
                return false;
        return true;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.close();
        int i;
        if( n % 2 == 0 && !isPrime(n/2)){
            System.out.println(n/2+" "+n/2);
        }else{
            for(i=4;i<=n;i++)
                if(!isPrime(i) && !isPrime(n -  i)){
                    System.out.println(i+" "+(n - i));
                    break;
                }
        }

    }
}
