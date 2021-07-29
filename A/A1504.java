import java.util.Scanner;

public class A1504 {
    public static boolean Done(char[] ch, int n){
        for(int i=0;i<=(n/2);i++){
            if(ch[i] != ch[n - 1 - i])
                return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n, p;
        boolean no;
        String s;
        while(t--!=0){
            no = false;
            s = input.next();
            s+="a";
            char[] ch = s.toCharArray();
            char ex;
            n = ch.length;
            p = n - 1;
            while(!Done(ch, n)){
                if(p == 0){
                    no = true;
                    break;
                }
                ex = ch[p];
                ch[p] = ch[p - 1];
                p--;
                ch[p] = ex;
            }
            if(no){
                if(Done(ch, n)){
                    System.out.println("YES");
                    System.out.println(new String(ch));
                }else
                    System.out.println("NO");
            }else{
                System.out.println("YES");
                System.out.println(new String(ch));
            }
        }
        input.close();
    }
}
