import java.util.Scanner;

public class A318 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long num = input.nextLong();
        long find = input.nextLong();
        input.close();
        long odds = 0;
        if(num % 2 == 1){
            odds = num/2 + 1;
        }else{
            odds = num / 2;
        }
        long ans;
        if(find <= odds){
            ans = 1 + (find - 1)*2;
        }else{
            ans = 2 + (find - odds - 1)*2;
        }
        System.out.println(ans);
    }
}
