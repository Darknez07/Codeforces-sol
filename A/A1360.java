import java.util.Scanner;

public class A1360 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int l,b;
        while(t--!=0){
            l = input.nextInt();
            b = input.nextInt();
            if(l > b){
                if(2*b >= l){
                    System.out.println(2*b*2*b);
                }else{
                    System.out.println(l*l);
                }
            }else{
                if(2*l >= b){
                    System.out.println(2*l*2*l);
                }else{
                    System.out.println(b*b);
                }
            }
        }
        input.close();
    }
}
