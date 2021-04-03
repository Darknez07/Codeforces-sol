import java.util.Scanner;

public class A271 {
    public static boolean counts(char[] s){
        if(s[0] == s[1] || s[0] == s[2] || s[0] == s[3])
            return false;
        else if(s[1] == s[3] || s[1] == s[2])
            return false;
        else if(s[2] == s[3])
            return false;
        else
            return true;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int year = Integer.parseInt(s);
        boolean found = false;
        while(!found){
            year++;
            found = counts(Integer.toString(year).toCharArray());
        }
        System.out.println(year);
        input.close();
    }
}
