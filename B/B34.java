import java.util.Arrays;
import java.util.Scanner;

public class B34 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int len = input.nextInt();
        int carry = input.nextInt();
        int[] arr = new int[len];
        for(int i = 0; i < len; i++){
            arr[i] = input.nextInt();
        }
        input.close();
        int sum = 0;
        Arrays.sort(arr);
        for(int i=0;i<carry;i++){
            if(arr[i] > 0)
                break;
            sum+=arr[i];
        }
        System.out.println(-sum);
    }
}
