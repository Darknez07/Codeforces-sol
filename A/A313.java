import java.util.Scanner;

public class A313 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        input.close();
        long in = Integer.parseInt(s);
        if(in < 0){
            char ch = s.charAt(s.length() - 1);
            String n1 = s.substring(0,s.length() - 1);
            String n2 = n1.substring(0,n1.length() - 1)+Character.toString(ch);
            long a = Long.parseLong(n2);
            long b = Long.parseLong(n1);
            if(a > b){
                System.out.println(a);
            }else{
                System.out.println(b);
            }
        }else{
            System.out.println(in);
        }
    }
}
