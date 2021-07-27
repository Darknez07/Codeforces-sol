import java.util.Scanner;

public class B1_1551 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        String s;
        int[] ch;
        while(t--!=0){
            s = input.next();
            ch = new int[26];
            for(int i=0;i<s.length();i++){
                ch[s.charAt(i) - 'a']++;
            }
            int r=0,g=0;
            for(int i=0;i<26;i++){
                if(ch[i] ==0)
                    continue;
                if(ch[i] >= 2){
                    r++;
                    g++;
                }else{
                    if(r > g){
                        g++;
                    }else if(g > r){
                        r++;
                    }else{
                        g++;
                    }
                }
            }
            System.out.println(Math.min(g,r));
        }
        input.close();
    }
}
