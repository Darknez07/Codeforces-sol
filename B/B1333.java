import java.util.Scanner;

public class B1333 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,minus,plus,b;
        int[] a;
        while(t--!=0){
            n = input.nextInt();
            minus = n + 1;
            plus = n + 1;
            a = new int[n];
            for(int i = 0; i < n; i++){
                a[i] = input.nextInt();
                // Find the first minus sign
                // And first plus sign in array "a"
                if(a[i] < 0 && minus==n+1)
                    minus = i;
                if(a[i] > 0 && plus==n+1)
                    plus = i;
            }
            boolean res = true;
            for(int i=0;i<n;i++){
                b = input.nextInt();
                // Search for negative sign > first minus
                if(b < a[i] && minus >= i)
                    res = false;
                // Search for positive sign > first plus
                if(b > a[i] && plus >= i)
                    res = false;
            }
            if(res)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        input.close();
    }
}
