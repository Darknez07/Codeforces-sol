import java.util.Scanner;

public class A136 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        int i=0;
        while(i++!=n){
            a[input.nextInt() - 1] = i;
        }
        input.close();
        for(i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
    }
}
