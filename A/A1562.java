import java.util.*;
public class A1562 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long x, y, temp;
        while (t-- != 0) {
            x = input.nextLong();
            y = input.nextLong();
            temp = y/2;
            if(2*temp <= y && temp >= x){
                System.out.println(y % 2 == 1 ? temp: temp - 1);
            }else{
                System.out.println(y % x);
            }
        }
        input.close();
    }
}