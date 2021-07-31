import java.util.Scanner;

public class B1183 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,k,min = Integer.MAX_VALUE;
        int[] arr;
        boolean no;
        while(t--!=0){
            min = Integer.MAX_VALUE;
            n = input.nextInt();
            k = input.nextInt();
            arr = new int[n];
            no = false;
            for(int i=0;i<n;i++){
                arr[i] = input.nextInt();
                if(min > arr[i]){
                    min = arr[i];
                }
            }
            for(int i=0;i<n;i++){
                if(Math.abs(arr[i] - min - k) > k){
                    no = true;
                    break;
                }
            }
            System.out.println(no ? -1: min+k);
        }
        input.close();
    }
}
