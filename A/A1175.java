import java.util.Scanner;

public class A1175 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,k;
        long counter;
        while(t--!=0){
            counter = 0;
            n = input.nextLong();
            k = input.nextLong();
            while(n!=0){
                if(n %k!=0){
                    counter+=(n % k);
                    n-=(n % k);
                    continue;
                }
                n/=k;
                counter++;
            }
            System.out.println(counter);
        }
        input.close();
    }
}
