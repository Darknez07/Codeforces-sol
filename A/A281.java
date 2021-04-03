import java.util.*;
public class A281 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] s = input.next().split("");
        s[0] = s[0].toUpperCase();
        System.out.println(String.join("",s));
        input.close();  
    }
}
