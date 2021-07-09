import java.util.Scanner;

public class A709{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int b = input.nextInt();
        int d = input.nextInt();
        int waste = 0,choose =0,num;
        for(int i=0;i<n;i++){
            num = input.nextInt();
            if(num > b){
                continue;
            }
            choose+=num;
            if(choose > d){
                choose = 0;
                ++waste;
            }
        }
        System.out.println(waste);
        input.close();
    }
}