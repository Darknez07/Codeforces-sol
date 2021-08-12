import java.util.Arrays;
import java.util.Scanner;

public class B766 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = input.nextInt();
        }
        Arrays.sort(a);
        int s1,s2,s3;
        s1 = a[n - 1];
        s3 = a[n - 3];
        s2 = a[n - 2];
        boolean no = true;
        for(int i=n-4;i>=0;i--){
            if(s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2){
                no = false;
                break;
            }
            s1 = s2;
            s2 = s3;
            s3 = a[i];
        }
        if(s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
            System.out.println("YES");
        else if(no)
            System.out.println("NO");
        input.close();
    }
}
