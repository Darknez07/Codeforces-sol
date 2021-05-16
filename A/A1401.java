import java.util.Scanner;
public class A1401 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t =input.nextInt();
        long dist,a;
        while(t--!=0){
            a = input.nextLong();
            dist = input.nextLong();
            System.out.println((dist > a) ? (dist - a): (a - dist) % 2);
        }
        input.close();
    }
}
