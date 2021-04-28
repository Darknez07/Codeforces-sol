import java.util.Arrays;
import java.util.Scanner;
//Incomplete
public class C1433 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] arr;
        int max;
        int[] sortedarr;
        while(t--!=0){
            int n = input.nextInt();
            arr = new int[n];
            sortedarr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = input.nextInt();
                sortedarr[i] = arr[i];
            }
            int i;
            Arrays.sort(sortedarr);
            max = sortedarr[n - 1];
            for(i=0;i<n-1;i++){
                if(max == arr[i] && ((i!=0 && arr[i - 1] < arr[i]) || arr[i + 1] < arr[i])){
                    break;
                }
            }
            if(i + 1 == arr.length)
                if(arr[i - 1] < arr[i])
                    System.out.println(i+1);
                else
                    System.out.println(-1);
            else
                System.out.println(i+1);
        }
        input.close();
    }
}
