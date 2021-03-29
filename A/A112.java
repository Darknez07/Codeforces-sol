import java.util.*;
public class A112{
        int result;
        public void Compare(String one, String two){
            one = one.toLowerCase();
            two = two.toLowerCase();
            if(one.compareTo(two) < 0)
                result = -1;
            if(one.compareTo(two) > 0)
                result = 1;
            if(one.compareTo(two) == 0)
                result = 0;
        }
        public static void main(String[] args) {
            Scanner input = new Scanner(System.in);
            A112 a = new A112();
            a.Compare(input.nextLine(),input.nextLine());
            System.out.println(a.result);
            input.close();
        }
}