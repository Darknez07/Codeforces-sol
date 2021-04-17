import java.util.Scanner;

public class A509 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[][] arr = new int[n][n];
        input.close();
        for(int i = 0; i <n;i++){
            if(i == 0){
                arr[0][0] = 1;
                continue;
            }
            arr[0][i] = 1;
            arr[i][0] = 1;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
        System.out.println(arr[n-1][n-1]);
    }
}
