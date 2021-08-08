import java.util.Scanner;

public class C1520 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[][] M;
        int n,c;
        while (t-- != 0) {
            n = input.nextInt();
            M = new int[n][n];
            if (n == 1) {
                System.out.println(1);
                continue;
            } else if (n == 2) {
                System.out.println(-1);
                continue;
            }else{
                c = 1;
                for(int i=0;i<n;i++,c++){
                    M[i][i] = c;
                }
                for(int i=1;i<n;i++){
                    // Left diagonal
                    //Right diagonal (j, i)=> far place c + 1;
                    for(int j=0;j<i;j++,c+=2){
                        M[i][j] = c;
                        M[j][i] = c + 1;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(M[i][j] + " ");
                }
                System.out.println();
            }
        }
        input.close();
    }
}
