import java.util.Scanner;

public class A69 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int x = 0,y = 0,z = 0;
        while(t--!=0){
            x += input.nextInt();
            y += input.nextInt();
            z += input.nextInt();
        }
        input.close();
        if(x == 0 && y == 0 && z == 0){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
