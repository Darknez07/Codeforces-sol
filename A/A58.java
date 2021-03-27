import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class A58 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String a = input.next();
        input.close();
        Pattern pattern = Pattern.compile("h+.*e+.*l+.*l+.*o+.*");
        Matcher matcher = pattern.matcher(a);
        boolean found = matcher.find();
        if(found){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
