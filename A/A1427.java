import java.util.Scanner;
import java.util.Arrays;

public class A1427 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] a;
        int n;
        int sum = 0;
        while(t--!=0){
            n = input.nextInt();
            a = new int[n];
            sum = 0;
            for(int i=0;i<n;i++){
                a[i] = input.nextInt();
                sum+=a[i];
            }
            if(sum == 0){
                System.out.println("NO");
            }else{
                Arrays.sort(a);
                System.out.println("YES");
                if(sum < 0){
                    for(int i=0;i<n;i++){
                        System.out.print(a[i]+" ");
                    }
                    System.out.println();
                }else{
                    for(int i=n - 1;i>=0;i--){
                        System.out.print(a[i]+" ");
                    }
                    System.out.println();
                }
            }
        }
        input.close();
    }
}
