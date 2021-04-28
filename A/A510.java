import java.util.Scanner;

public class A510 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        char[][] ch = new char[n][m];
        input.close();
        for(int i=0;i<n;i++){
            for(int j=0;j<m-1;j++){
                if((i+1) % 2 == 0)
                    if((i+1) % 4 == 0)
                        ch[i][m - 1 - j] = '.';
                    else
                        ch[i][j] = '.';
                else
                    ch[i][j] = '#';
            }
            if(ch[i][m - 1] == '.')
                ch[i][0] = '#';
            else
                ch[i][m - 1] = '#';
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                System.out.print(ch[i][j]);
            System.out.println();
        }
    }
}
