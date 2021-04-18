import java.util.Scanner;

public class A677 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int people = input.nextInt();
        int h = input.nextInt();
        int w=0,a;
        while(people--!=0){
            a = input.nextInt();
            if(a > h)
                w+=2;
            else
                w++;
        }
        System.out.println(w);
        input.close();
    }
}
