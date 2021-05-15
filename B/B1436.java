import java.util.Scanner;

public class B1436 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t--!=0){
            int n = input.nextInt();
            int[][] arr = new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i == j || i + j == n - 1){
                        arr[i][j] = 1;
                        continue;
                    }else if(n % 2 == 1 &&  Math.abs(i - j) == 1 && (i == n/2 || j == n/2)){
                        arr[i][j] = 1;
                        continue;
                    }
                    arr[i][j] = 0;
                }
            }
            for(int i = 0;i<n;i++){
                for(int j=0;j<n;j++){
                    System.out.print(arr[i][j]+" ");
                }
                System.out.println();
            }
        }
        input.close();
    }
}
