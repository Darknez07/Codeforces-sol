import java.util.Scanner;

public class B732 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        input.close();
        int walk = 0;
        for(int i=0;i<n-1;i++){ 
            if((k - arr[i] - arr[i + 1]) > 0){
                walk+=(k - arr[i] - arr[i+1]);
                arr[i+1]+=(k - arr[i] - arr[i + 1]);
            }
        }
        System.out.println(walk);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
