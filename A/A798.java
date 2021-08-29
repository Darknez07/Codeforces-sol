import java.util.*;
public class A798 {
    public static int Palin(String s){
        int n = s.length();
        for(int i=0;i<n/2;i++){
            if(s.charAt(i) != s.charAt(n - 1 - i))
                return i;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char[] ch = input.next().toCharArray();
        input.close();
        int indx = Palin(String.valueOf(ch));
        if(indx == - 1 && ch.length % 2 == 0){
            System.out.println("No");
            return;
        }else if(indx == - 1 && ch.length % 2 == 1){
            System.out.println("Yes");
            return;
        }
        ch[indx] = ch[ch.length - 1 - indx];
        if(Palin(String.valueOf(ch)) == -1){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}
