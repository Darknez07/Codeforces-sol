import java.util.Scanner;

public class B1440 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,k,inc,last,c;
        long sum;
        int[] size;
        while (t--!=0){
            n = input.nextInt();
            k = input.nextInt();
            size = new int[n*k];
            sum = 0;
            c = 0;
            for(int i=0;i<n*k;i++){
                size[i] = input.nextInt();
            }
            inc = n/2 + 1;
            last = n*k;
            while(c!=k){
                sum+=size[last - inc];
                last = last - inc;
                c++;
            }
            System.out.println(sum);
        }
        input.close();
    }
}
