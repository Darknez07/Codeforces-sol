import java.util.Scanner;

public class A431 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] a = new int[4];
        a[0] = input.nextInt();
        a[1] = input.nextInt();
        a[2] = input.nextInt();
        a[3] = input.nextInt();
        String l = input.next();
        input.close();
        int sum = 0;
        for(int i=0;i<l.length();i++){
            sum+=a[Integer.parseInt(Character.toString(l.charAt(i))) - 1];
        }
        System.out.println(sum);
    }
}
