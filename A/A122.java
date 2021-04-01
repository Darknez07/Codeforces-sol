import java.util.Scanner;

public class A122 {
    public static void main(String[] args) {
        int[] lucky = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
        Scanner input = new Scanner(System.in);
        int ans = input.nextInt();
        input.close();
        boolean divisible = false;
        for(int i = 0; i < lucky.length; i++){
            if(ans % lucky[i] == 0){
                divisible = true;
                break;
            }
        }
        if(divisible){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
