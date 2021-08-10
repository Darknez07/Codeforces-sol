import java.util.Scanner;
import java.util.Arrays;

public class B1144 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] parity = new int[2];
        int[] arr = new int[n];
        long sum = 0;
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
            parity[arr[i] % 2]++;
        }
        if(Math.abs(parity[0] - parity[1]) <= 1){
            System.out.println(0);
        }else{
            Arrays.sort(arr);
            if(parity[1] < parity[0]){
                parity[0] = parity[0] - parity[1] - 1;
                for(int i=0;i<n;i++){
                    if(arr[i] % 2 == 0){
                        if(parity[0] == 0)
                            break;
                        sum+=arr[i];
                        parity[0]--;
                    }
                }
            }else{
                parity[1] = parity[1] - parity[0] - 1;
                for(int i=0;i<n;i++){
                    if(arr[i] % 2 == 1){
                        if(parity[1] == 0)
                            break;
                        sum+=arr[i];
                        parity[1]--;
                    }
                }
            }
            System.out.println(sum);
        }
        input.close();
    }
}
