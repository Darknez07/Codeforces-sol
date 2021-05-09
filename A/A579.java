import java.util.Scanner;

public class A579 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.close();
        double ans = Math.log(n)/Math.log(2);
        int integer_ans = (int)ans;
        int backs = 0;
        if(ans - integer_ans == 0){
            System.out.println(1);
        }else{
            int mid = n;
            while(n!=0 && n!=1 && integer_ans!=0){
                mid-=Math.pow(2,integer_ans--);
                if(mid >= 0){
                    n = mid;
                    backs++;
                }else{
                    mid = n;
                }
            }
            if(n == 1){
                backs++;
            }
            System.out.println(backs);
        }
    }
}
