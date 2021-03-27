import java.util.Scanner;

public class A59 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String well = input.next();
        char[] s = well.toCharArray();
        int upper =0,lower=0;
        for(int i =0;i<s.length;i++)
            if(Character.isUpperCase(s[i]))
                upper++;
            else
                lower++;
        if(lower >= upper)
            System.out.println(well.toLowerCase());
        else
            System.out.println(well.toUpperCase());
        input.close();
    }
}
