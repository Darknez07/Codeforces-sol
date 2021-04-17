import java.util.Scanner;

public class B1359 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,m;
        char[][] ans;
        while (t--!=0){
            n = input.nextInt();
            m = input.nextInt();
            ans = new char[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    ans[i][j] = input.next().toCharArray()[0];
                }
            }
            if(n > 1){
            for(int i=0;i<n;i+=2){
                for(int j=0;j<m;j++){
                    if(i >=  n - 1)
                        break;
                    System.out.println(ans[i][j]+" "+ans[i+1][j]);
                }
            }
        }
        }
        input.close();
    }
}
