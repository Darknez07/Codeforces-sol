import java.util.Scanner;

public class A1406 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] freq;
        int fr, n, ans;
        while (t-- != 0) {
            n = input.nextInt();
            freq = new int[101];
            ans = 0;
            for (int i = 0; i < n; i++) {
                fr = input.nextInt();
                freq[fr]++;
            }
            // Give to A
            for (int i = 0; i < 101; i++) {
                if (freq[i] == 0) {
                    ans += i;
                    break;
                }
                freq[i]--;
            }
            //Give to B;
            for (int i = 0; i < 101; i++) {
                if (freq[i] == 0) {
                    ans += i;
                    break;
                }
                freq[i]--;
            }
            System.out.println(ans);
        }
        input.close();
    }
}