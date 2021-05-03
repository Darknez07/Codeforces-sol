import java.util.Scanner;

public class A270{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int ans,angle;
        while(t--!=0){
            angle = input.nextInt();
            ans = 180 - angle;
            if(360 % ans == 0)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        input.close();
    }
}