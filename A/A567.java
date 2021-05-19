import java.util.Scanner;

public class A567 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long[] arr = new long[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextLong();
        }
        input.close();
        long max,min;
        for(int i=0;i<n;i++){
            if(i == 0){
                min = arr[i] - arr[i + 1];
                max = arr[n - 1] - arr[i];
            }else if(i == n - 1){
                min = arr[i] - arr[i - 1];
                max = arr[i] - arr[0];
            }else{
                min = Math.abs(arr[i] - arr[i - 1]);
                if(min > Math.abs(arr[i] - arr[i + 1])){
                    min = Math.abs(arr[i] - arr[i + 1]);
                }
                max = Math.abs(arr[i] - arr[0]);
                if(max < Math.abs(arr[n - 1] - arr[i])){
                    max = Math.abs(arr[n - 1] - arr[i]);
                }
            }
            min = Math.abs(min);
            max = Math.abs(max);
            System.out.println(min+" "+max);
        }
    }
}
