import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class A133 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        Pattern p = Pattern.compile("[HQ9]+");
        Matcher m = p.matcher(s);
        input.close();
        if(m.find()) {
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
