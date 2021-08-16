import java.util.Arrays;
import java.util.Scanner;
// Both Hard and easy version
// But took lot of time
public class D1_1419 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long[] a = new long[t];
        long[] ans = new long[t];
        for(int i=0;i<t;i++){
            a[i] = input.nextLong();
        }
        Arrays.sort(a);
        int j = 0;
        for(int i=1;i<t;i+=2){
            ans[i] = a[j];
            j++;
        }
        for(int i=0;i<t;i+=2){
            ans[i] = a[j];
            j++;
        }
        int count = 0;
        for(int i=1;i<t - 1;i++){
            if(ans[i] < ans[i - 1] && ans[i] < ans[i + 1])
                count++;
        }
        System.out.println(count);
        for(int i=0;i<t;i++){
            System.out.print(ans[i]+" ");
        }
        input.close();
    }
}
