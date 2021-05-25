import java.util.Scanner;

public class B1515 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n;
        double sqrt,sqrt2;
        while(t--!=0){
            n = input.nextLong();
            sqrt = Math.sqrt(n/2);
            sqrt2 = Math.sqrt(n/4);
            // 2 makes sense due to area
            // 4 makes sense due to put 4 by 4 togather
            if((n % 2 == 0 && sqrt - Math.floor(sqrt) == 0) ||  (n % 4 == 0 && sqrt2 - Math.floor(sqrt2) == 0)){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}
