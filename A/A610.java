import java.util.*;
public class A610 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        if(n % 4 == 0){
            System.out.println(n/4 - 1);
        }else if(n %4 == 2){
            System.out.println(n/4);
        }else{
            System.out.println(0);
        }
        input.close();
    }
}
