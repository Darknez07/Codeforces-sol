import java.util.Scanner;

public class A1365 {
    // I mean really wow
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int ch, f, j;
        while (t-- != 0) {
            int n = input.nextInt();
            int m = input.nextInt();
            int[] col = new int[n];
            int[] row = new int[m];
            for (int i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    if (j == 0) {
                        ch = input.nextInt();
                        col[i] = ch;
                    } else {
                        ch = input.nextInt();
                        if (ch == 1) {
                            col[i] = ch;
                        }
                    }
                    if (i == 0) {
                        f = ch;
                        row[j] = f;
                    } else {
                        f = ch;
                        if (f == 1) {
                            row[j] = f;
                        }
                    }
                }
            }
            f = 0;
            for (int i = 0; i < n; i++) {
                if (col[i] == 1)
                    f++;
            }
            f = 0;
            for (int i = 0; i < m; i++) {
                if (row[i] == 1)
                    f++;
            }
            if(f == m){
                System.out.println("Vivek");
                continue;
            }
            f = 0;
            for(int i=0; i < n; i++){
                if(col[i] == n)
                    f++;
            }
            if(f == n){
                System.out.println("Vivek");
                continue;
            }
            f = 0;
            for(int i=0; i < n; i++){
                if(col[i] == 0){
                    j = 0;
                    for(;j<m;j++){
                        if(row[j] == 0){
                            row[j] = 1;
                            col[i] = 1;
                            f = f == 0 ? 1: 0;
                            break;
                        }
                    }
                    if(j == m){
                        break;
                    }
                }
            }
            if(f == 1){
                System.out.println("Ashish");
            }else{
                System.out.println("Vivek");
            }
        }
        input.close();
    }
}
