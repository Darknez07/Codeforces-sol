import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;

public class B1353 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,k;
        while(t--!=0){
            n = input.nextInt();
            k = input.nextInt();
            int[] arr1 = new int[n];
            Integer[] arr2 = new Integer[n];
            for(int i=0;i<n;i++)
                arr1[i] = input.nextInt();
            for(int j=0;j<n;j++)
                arr2[j] = input.nextInt();
            Arrays.sort(arr1);
            Arrays.sort(arr2, Collections.reverseOrder());
            int total = 0;
            for(int i=0;i<k;i++){
                if(arr2[i] > arr1[i])
                    total+=arr2[i];
                else
                    total+=arr1[i];
            }
            for(int j=k;j<n;j++){
                total+=arr1[j];
            }
            System.out.println(total);
        }
        input.close();
    }
}
