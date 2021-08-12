import java.util.Scanner;

public class B1405 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        long[] a;
        long sum;
        while(t--!=0){
            n = input.nextInt();
            a = new long[n];
            sum = 0;
            for(int i=0;i<n;i++){
                a[i] = input.nextLong();
                // We do not need the negative sum
                // If the further we get negative terrms
                // All previous values will gobble them up
                sum+=a[i];
                if(sum < 0)
                    sum = 0;
                // Zero on if negative
                // That is not real cost
            }
            System.out.println(sum);
        }
        input.close();
    }
}
