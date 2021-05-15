import java.util.Arrays;
import java.util.Scanner;

public class A149 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        int[] arr = new int[12];
        for (int i = 0; i < 12; i++) {
            arr[i] = input.nextInt();
        }
        input.close();
        int temp;
        Arrays.sort(arr);
        for (int i = 0; i < 6; i++) {
            temp = arr[i];
            arr[i] = arr[11 - i];
            arr[11 - i] = temp;
        }
        int sum = 0;
        if (k == 0) {
            System.out.println(0);
        } else {
            int i;
            for (i = 0; i < 12; i++) {
                sum+=arr[i];
                if(sum >= k)
                    break;
            }
            if(sum < k)
                System.out.println(-1);
            else
                System.out.println(i+1);
        }
    }
}
