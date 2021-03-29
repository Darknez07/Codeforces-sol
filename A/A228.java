import java.util.Scanner;

public class A228 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int max = 0;
        int a = input.nextInt();
        int b = input.nextInt();
        if(a == b){
            max++;
        }
        int c = input.nextInt();
        if(b == c){
            max ++;
        }
        if(a == c){
            max ++;
        }
        int d = input.nextInt();
        if(c == d){
            max++;
        }
        if(b == d){
            max ++;
        }
        if(a == d){
            max++;
        }
        if(max == 3){
            max -- ;
        }
        if(max == 6){
            max/=2;
        }
        input.close();
        System.out.println(max);
    }
}