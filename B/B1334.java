import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class B1334 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        Long[] arr;
        long n, w;
        while(t--!=0){
            n = input.nextLong();
            w = input.nextLong();
            arr = new Long[(int)n];
            for(int i=0; i<n; i++){
                arr[i] = input.nextLong();
            }
            Arrays.sort(arr, Collections.reverseOrder());
            long count = 0;
            long s = 0;
            for(int i=0;i<arr.length;i++){
                s+=arr[i];
                if(s < (i+1)*w){
                    break;
                }
                count = i + 1;
            }
            System.out.println(count);
        }
        input.close();
    }
}
