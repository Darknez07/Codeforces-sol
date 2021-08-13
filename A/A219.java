import java.util.Scanner;

public class A219 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[26];
        char[] ch = input.next().toCharArray();
        for(int i=0;i<ch.length;i++) {
            a[ch[i] - 'a']++;
        }
        String ans = "";
        String copy = "";
        int factor = 0;
        for(int i=0;i<26;i++){
            if(a[i] == 0)
                continue;
            if(a[i] % n != 0){
                ans = "";
                break;
            }else{
                factor = a[i]/n;
                copy+=(char)(i + 'a');
                ans+=copy.repeat(factor);
                copy = "";
            }
        }
        ans = ans.repeat(n);
        System.out.println(ans == ""? -1: ans);
        input.close();
    }
}
