import java.util.Scanner;

public class A1221 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,f;
        while(t--!=0){
            n = input.nextLong();
            int[] arr = new int[12];
            for(int i=0;i<n;i++){
                f = input.nextLong();
                for(long p=0;f!=0 && p < 12;f/=2,p++){if(f == 1){++arr[(int)p];}}
            }
            for(long p = 1;p<12;p++){arr[(int)p]+=arr[(int)p-1]/2;}
            if(arr[11]!=0)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        input.close();
    }
}
