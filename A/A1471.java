import java.util.Scanner;

public class A1471{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        long p,sum,max;
        double x;
        while(t--!=0){
            n = input.nextInt();
            x = input.nextDouble();
            sum = 0;
            max = 0;
            for(int i=0;i<n;i++){
                p = input.nextLong();
                max+=((long)Math.ceil(p/x));
                sum+=p;
            }
            input.close();
            System.out.print((long)Math.ceil(sum/x)+" ");
            System.out.println(max);
        }
    }
}