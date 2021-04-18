import java.util.Scanner;

public class A705 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String hate = "hate ";
        String love = "love ";
        String it = "it";
        String that = "that ";
        String I = "I ";
        int i = 0;
        String ans="";
        if(n == 1)
            System.out.println(I+hate+it);
        else
            while(i++!=(n+1)){
                if(i == n & n % 2 == 0){
                    ans+=(I+love+it);
                    break;
                }
                else if(i == n & n % 2!=0){
                    ans+=(I+hate+it);
                    break;
                }
                if((i+1) % 2 == 0)
                    ans+=(I+hate+that);
                else
                    ans+=(I+love+that);
            }
        input.close();
        System.out.println(ans);
    }
}
