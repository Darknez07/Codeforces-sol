import java.util.*;

public class A621 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long sum = 0;
        long[] additions = new long[n];
        for(int i=0;i<n;i++){
            additions[i] = input.nextLong();
            sum+=(additions[i]);
        }
        if(sum % 2 == 0)
            System.out.println(sum);
        else{
            Arrays.sort(additions);
            for(int i=0;i<n;i++){
                if(additions[i] % 2 == 1){
                    sum-=additions[i];
                    break;
                }
            }
            if(sum < 0)
                sum = 0;
            System.out.println(sum);
        }
        input.close();
    }
}
