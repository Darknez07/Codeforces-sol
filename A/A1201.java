import java.util.Scanner;
public class A1201{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n = input.nextInt();
        char[][] ch;
        int val,ans = 0;
        ch = new char[t][n];
        for(int i=0;i<t;i++){
            ch[i] = input.next().toCharArray();
        }
        int[] counter;
        int max;
        for(int i=0;i<n;i++){
            val = input.nextInt();
            counter = new int[5];
            max = -1;
            for(int j=0;j<t;j++){
                counter[ch[j][i] - 'A']++;
            }
            for(int j=0;j<5;j++){
                max = Math.max(max, counter[j]);
            }
            ans+=(val*max);
        }
        System.out.println(ans);
        input.close();
    }
}