import java.util.Scanner;
// It was so easy and I am pathetic;
// Because only immediate left/right has proper max
public class A1554 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        long ans;
        long[] arr;
        while(t--!=0){
            n = input.nextInt();
            ans = 0;
            arr = new long[n];
            for(int i=0;i<n;i++){
                arr[i] = input.nextLong();
                if(i > 0)
                    ans = Math.max(ans,arr[i]*arr[i - 1]);
            }
            System.out.println(ans);
        }
        input.close();
    }
}
