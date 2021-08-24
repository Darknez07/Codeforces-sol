import java.util.Scanner;

public class C1506 {
    public static int LCS_try(char[] a, char[] b){
        int n = a.length;
        int m = b.length;
        int max = 0;
        int[][] lcs = new int[n + 1][m + 1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i - 1] == b[j - 1]){
                    // Checking if characters are equal
                    // Keep track of string length;
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;
                    // DP to keep track of equal strings
                    max = Math.max(max, lcs[i][j]);
                }
            }
        }
        max = n + m - max - max;
        return max;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        char[] a,b;
        while(t--!=0){
            a = input.next().toCharArray();
            b = input.next().toCharArray();
            if(String.valueOf(a).equals(String.valueOf(b))){
                System.out.println(0);
                continue;
            }
            System.out.println(LCS_try(a,b));
        }
        input.close();
    }
}
