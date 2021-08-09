import java.util.Scanner;

public class A1462 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,pos,last,i;
        int[] a,b;
        while(t--!=0){
            n = input.nextInt();
            a = new int[n];
            b = new int[n];
            last = n - 1;
            pos = 0;
            for(i=0;i<n;i++){
                a[i] = input.nextInt();
            }
            i = 0;
            while(pos < last){
                b[i] = a[pos];
                i++;
                b[i] = a[last];
                i++;
                pos++;
                last--;
            }
            b[n - 1] = a[n/2];
            for(i=0;i<n;i++){
                System.out.print(b[i]+" ");
            }
            System.out.println();
        }
        input.close();
    }
}
