import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

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
                    if(a[1] < b[1])
                        return 1;
                    else
                        return -1;
                }
            });
            while (B > 0 && c < n) {
                factor = (int)Math.ceil((double)a[c][1] / A);
                B -= (a[c][0] * factor);
                if((a[c][1] - A * factor) > 0 && B <= 0){
                    no = true;
                    break;
                }
                c++;
            }
            if(no)
                System.out.println("NO");
            else
                System.out.println("YES");
        }
        input.close();
    }
}