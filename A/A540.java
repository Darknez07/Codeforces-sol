import java.util.*;
public class A540 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        char[] start = input.next().toCharArray();
        char[] end = input.next().toCharArray();
        int ans,sum = 0;
        for(int i=0;i<n;i++){
            ans = Math.abs(end[i] - start[i]);
            if(ans > 5){
                ans = 10 - ans;
            }
            sum+=ans;
        }
        System.out.println(sum);
        input.close();
    }
}
