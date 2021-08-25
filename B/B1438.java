import java.util.Arrays;
import java.util.Scanner;

public class B1438 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        boolean yes;
        while(t--!=0){
            n = input.nextInt();
            int[] arr = new int[n];
            yes = false;
            for(int i=0;i<n;i++){
                arr[i] = input.nextInt();
            }
            Arrays.sort(arr);
            for(int i=0;i<n - 1;i++){
                // Intrestingly if any two equal
                // They are the one's we need
                // And just make r1 = l1 + 1
                // And just make r2 = l2 + 1
                if(arr[i] == arr[i + 1]){
                    yes = true;
                    break;
                }
            }
            System.out.println(yes ? "Yes":"No");
        }
        input.close();
    }
}
