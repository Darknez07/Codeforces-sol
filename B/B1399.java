import java.util.Scanner;

public class B1399 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,min_a = Integer.MAX_VALUE,min_b= Integer.MAX_VALUE;
        long count=0;
        int a_diff;
        int b_diff;
        while (t--!=0){
            count = 0;
            min_a = Integer.MAX_VALUE;
            min_b= Integer.MAX_VALUE;
            n = input.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];
            for(int i=0;i<n;i++){
                a[i] = input.nextInt();
                if(min_a > a[i])
                    min_a = a[i];
            }
            for(int i=0;i<n;i++){
                b[i] = input.nextInt();
                if(min_b > b[i])
                    min_b = b[i];
            }
            for(int i=0;i<n;i++){
                a_diff = (a[i] - min_a);
                b_diff = (b[i] - min_b);
                if(a_diff!= 0 && b_diff!=0){
                    if(a_diff < b_diff){
                        count+=b_diff;
                    }else{
                        count+=a_diff;
                    }
                }else{
                    if(a_diff == 0 && b_diff !=0){
                        count+=b_diff;
                    }else if(a_diff!=0  && b_diff == 0){
                        count+=a_diff;
                    }
                }
            }
            System.out.println(count);
        }
        input.close();
    }
}
