import java.util.Scanner;

public class A1272{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t--!=0){
            long[] arr = new long[3];
            for(int i=0;i<3;i++){
                arr[i] = input.nextLong();
            }
            // Actually maxmimum subtraction can be of 4
            // Cause let's say 5 3 1==> 4 4 2 ==> which is  0 + 2 + 2 ==> 4
            // Earlier it was 2 + 4 + 2 ==> 8
            // Reduction is 1 3 5 ==> 2 3 4 ==> 1 + 1 + 2 ==> 4
            System.out.println(Math.max(0,Math.abs(arr[2] - arr[0])+Math.abs(arr[2] - arr[1])+Math.abs(arr[1] - arr[0]) - 4));
        }
        input.close();
    }
}