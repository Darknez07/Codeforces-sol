import java.util.Scanner;

public class B1326 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long[] arr = new long[t];
        long max = 0;
        for(int i=0;i<t;i++){
            arr[i] = input.nextLong();
        }
        for(int i=0;i<t;i++){
            arr[i]+=max;
            if(arr[i] > max)
                max = arr[i];
            System.out.print(arr[i]+" ");
        }
        input.close();
    }
}
