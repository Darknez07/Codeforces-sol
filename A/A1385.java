import java.util.Scanner;

public class A1385 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int x,y,z;
        while(t--!=0){
            x = input.nextInt();
            y = input.nextInt();
            z = input.nextInt();
            if(x == y && x > z){
                System.out.println("YES");
                System.out.println(z+" "+z+" "+x);
            }
            else if(y == z && z > x){
                System.out.println("YES");
                System.out.println(x+" "+x+" "+z);
            }
            else if(z == x && x > y){
                System.out.println("YES");
                System.out.println(y+" "+y+" "+z);
            }
            else if(x == y && y == z){
                System.out.println("YES");
                System.out.println(x+" "+x+" "+x);
            }
            else
                System.out.println("NO");
        }
        input.close();
    }
}
