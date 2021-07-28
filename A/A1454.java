import java.util.Scanner;

public class A1454 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] a;
        int n,temp;
        while(t--!=0){
            n = input.nextInt();
            a = new int[n];
            for(int i=n;i>=1;i--){
                a[n - i] = i;
            }
            if(n % 2 == 1){
                temp = a[n/2];
                a[n/2] = a[n/2 + 1];
                a[n/2 + 1] = temp;
            }
            for(int i=0;i<n;i++){
                System.out.print(a[i]+" ");
            }
            System.out.println();
        }
        input.close();
    }
}
