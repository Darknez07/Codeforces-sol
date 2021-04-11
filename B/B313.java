import java.util.Scanner;

public class B313 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char ch[] = input.next().toCharArray();
        int dp[] = new int[ch.length - 1];
        dp[0] = ch[0] == ch[1] ? 1: 0;
        for(int i=2;i<ch.length;i++){
            if(ch[i - 1] == ch[i]){
                dp[i - 1]+=(dp[i - 2] + 1);
            }else{
                dp[i - 1]+=dp[i - 2];
            }
        }
        int q = input.nextInt();
        int left,right;
        for(int i=0;i<q;i++){
            left = input.nextInt();
            right = input.nextInt();
            if(left == 1){
                System.out.println(dp[right - 2]);
            }else{
                System.out.println(dp[right - 2] - dp[left - 2]);
            }
        }
        input.close();
    }
}
