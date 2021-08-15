import java.util.Scanner;

// Not completed

public class B1517{
    static int[][] arr;
    public static void explore(int n, int m, int minval){
        if(n == 0){
            for(int i=0;i<m;i++){
                System.out.println(arr[n][i]+" ");
            }
        }else{
            for(int i=0;i<m;i++){
                System.out.print(arr[n][i]+"-->");
                explore(n - 1, m, Math.min(arr[n][i], minval));
            }
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,m,temp;
        while(t--!=0){
            n = input.nextInt();
            m = input.nextInt();
            arr  = new int[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    arr[i][j] = input.nextInt();
                }
            }
            explore(n - 1, m, 1000000);
            System.out.println();
        }
        input.close();
    }
}