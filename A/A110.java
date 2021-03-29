import java.util.Scanner;

public class A110 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int seven = 0;
        int four = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i) == '7')
                seven++;
            else if(s.charAt(i) == '4')
                four++;
        }
        if(seven + four == 7 || seven + four == 4)
            System.out.println("YES");
        else
            System.out.println("NO");
        input.close();
    }
}
