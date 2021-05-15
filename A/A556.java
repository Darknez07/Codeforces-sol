import java.util.Scanner;

public class A556 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.next();
        int zeros = 0,ones  = 0,num;
        for(int i=0;i<n;i++){
            num = (int)(s.charAt(i)-'0');
            if(num == 0){
                zeros++;
            }else{
                ones++;
            }
        }
        input.close();
        System.out.println(Math.abs(zeros - ones));
    }
}
