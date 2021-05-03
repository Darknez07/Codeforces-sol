import java.util.*;
public class A282 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int pep = input.nextInt();
        String s = "l";
        int dummy = 0;
        for(int i=0;i<pep;i++){
            s = input.next();
            if(s.equals("X++") || s.equals("++X"))
                dummy++;
            else
                dummy--;
        }
        input.close();
        System.out.println(dummy);
    }
}
