import java.util.Arrays;
import java.util.Scanner;

public class A1535{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] arr = new int[4];
        int f1,f2;
        while(t--!=0){
            f1 = 0;
            f2 = 0;
            for(int i=0;i<4;i++){
                arr[i] = input.nextInt();
                if(i == 1){
                    f1 = Math.max(arr[i], arr[i - 1]);
                }else if(i == 3){
                    f2 = Math.max(arr[i], arr[i - 1]);
                }
            }
            Arrays.sort(arr);
            if(f1 == arr[3] && f2 == arr[2]){
                System.out.println("YES");
                continue;
            }
            if(f2 == arr[3] && f1 == arr[2]){
                System.out.println("YES");
                continue;
            }
            System.out.println("NO");
        }
        input.close();
    }
}