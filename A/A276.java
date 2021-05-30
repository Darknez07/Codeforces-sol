import java.util.Scanner;

public class A276 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long k = input.nextLong();
        long f,t,max=0;
        for(int i=0;i<n;i++){
            if(i == 0){
                f = input.nextLong();
                t = input.nextLong();
                if(t > k)
                    max = f - (t - k );
                else
                    max = f;
            }else{
                f = input.nextLong();
                t = input.nextLong();
                if(t > k)
                    f = f - (t - k);
                if(f > max)
                    max = f;
            }
        }
        System.out.println(max);
        input.close();
    }
}
