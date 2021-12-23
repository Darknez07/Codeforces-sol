import java.util.*;
public class B734 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long a = input.nextLong();
        long b = input.nextLong();
        long c = input.nextLong();
        long d = input.nextLong();
        long diff = Math.min(Math.min(a,c),d);
        a-=diff;
        c-=diff;
        d-=diff;
        diff = diff*256+Math.min(a,b)*32;
        System.out.println(diff);
        input.close();
    }
}
