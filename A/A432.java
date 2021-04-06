import java.util.Scanner;

public class A432 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int max = 5,in,count = 0;
        for(int i=0;i<a;i++){
            in = input.nextInt();
            if((max - in) >= b){
                count++;
            }
        }
        input.close();
        System.out.println(count/3);
    }
}
