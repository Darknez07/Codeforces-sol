import java.util.Scanner;
// Logic samjhna padega
// affected ke baad ka logic
public class A1539{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,x,time,ans,terms,affected;
        while(t--!=0){
            n = input.nextLong();
            x = input.nextLong();
            time = input.nextLong();
            ans = (time/x) * n;
            terms = time/x;
            affected = Math.min(n, terms);
            ans-=(affected*terms - affected*(affected - 1)/2);
            System.out.println(ans);
        }
        input.close();
    }
}