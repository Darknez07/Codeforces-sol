import java.util.Arrays;
import java.util.Scanner;
//Lot of time
public class B1300 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        int arr[];
        while(t--!=0){
            n = input.nextInt();
            arr = new int[2*n];
            for(int i = 0; i < 2*n; i++){
                arr[i] = input.nextInt();
            }
            Arrays.sort(arr);
            System.out.println(Math.abs(arr[n]-arr[n - 1]));
        }
        input.close();
    }
}
