import java.util.Scanner;

public class A1311 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b;
        while(t--!=0){
            b = input.nextInt();
            a = input.nextInt();
            if(a == b){
                System.out.println(0);
            }else if(b > a){
                if(a % 2 == 0){
                    if(b % 2 == 0)
                        System.out.println(1);
                    else
                        System.out.println(2);
                }else{
                    if(b % 2 == 0)
                        System.out.println(2);
                    else
                        System.out.println(1);
                }
            }else{
                if(a % 2 == 0){
                    if(b % 2 == 0)
                        System.out.println(2);
                    else
                        System.out.println(1);
                }else{
                    if(b % 2 == 0)
                        System.out.println(1);
                    else
                        System.out.println(2);
                }
            }
        }
        input.close();
    }
}
