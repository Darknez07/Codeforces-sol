import java.util.Scanner;

public class B746 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        char[] ch = new char[n];
        String s = input.next();
        int left,right;
        if(n % 2 == 0){
            left = n/2 - 1;
            right = n/2;
        }else{
            left = n/2;
            right = n/2 + 1;
        }
        input.close();
        for(int i=0;i<n;i++){
            if(i % 2 == 0 && left >= 0){
                ch[left] = s.charAt(i);
                left--;
            }else if(right!=n){
                ch[right] = s.charAt(i);
                right++;
            }
        }
        String ans;
        if(n % 2 == 1)
            ans = new StringBuilder(new String(ch)).reverse().toString();
        else
            ans = String.valueOf(ch);
        System.out.println(ans);
    }
}
