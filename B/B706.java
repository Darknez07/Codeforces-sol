import java.util.Scanner;

public class B706 {
    static int N = 100100;
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int arr[] = new int[N+1];
        for(int i=0;i<n;i++){
            //Count number of 
            ++arr[input.nextInt()];
        }
        for(int i=1;i<=N;i++){
            arr[i]+=arr[i - 1];
        }
        int q = input.nextInt();
        while(q--!=0){
            n = input.nextInt();
            System.out.println(arr[(n <= N)? n: N]);
        }
        input.close();
    }
}
