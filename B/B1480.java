import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;
// Not complete
public class B1480 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int A, B, n, c, factor;
        boolean no;
        int[][] a;
        while (t-- != 0) {
            A = input.nextInt();
            B = input.nextInt();
            n = input.nextInt();
            a = new int[n][2];
            no = false;
            for (int i = 0; i < n; i++) {
                a[i][0] = input.nextInt();
            }
            for (int i = 0; i < n; i++) {
                a[i][1] = input.nextInt();
            }
            c = 0;
            Arrays.sort(a,new Comparator<int[]>(){
                public int compare(int[] a, int[] b){
                    if(a[0] < b[0])
                        return a[0];
                    else
                        return b[0];
                }
            });
            while (B > 0 && c < n) {
                factor = a[c][1] / A;
                B -= (a[c][0]    * factor);
                if(B <= 0){
                    no = true;
                    break;
                }
                c++;
            }
            if(no || c < n)
                System.out.println("NO");
            else{
                System.out.println("YES");
            }
        }
        input.close();
    }
}
