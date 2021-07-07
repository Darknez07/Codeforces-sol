import java.util.Scanner;

public class A275 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[][] arr1 = new int[3][3];
        int[][] arr2 = new int[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr1[i][j] = input.nextInt();
                arr2[i][j] = arr1[i][j];
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr1[i][j] == 0)
                    continue;
                if(i - 1 >= 0){
                    arr2[i - 1][j]+=arr1[i][j];
                }if(j - 1 >=0){
                    arr2[i][j - 1]+=arr1[i][j];
                }if(i + 1 <= 2){
                    arr2[i + 1][j]+=arr1[i][j];
                }
                if(j + 1 <= 2){
                    arr2[i][j+1]+=arr1[i][j];
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr2[i][j] % 2 == 1)
                    arr1[i][j] = 0;
                else
                    arr1[i][j] = 1;
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                System.out.print(arr1[i][j]);
            }
            System.out.println();
        }
        input.close();
    }
}
