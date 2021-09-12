import java.util.*;
public class A1490 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,a,b,sum,db,prev;
        while(t--!=0){
            n = input.nextInt();
            prev = input.nextInt();
            sum = 0;
            for(int i=1;i<n;i++){
                db = input.nextInt();
                a = Math.min(prev,db);
                b = Math.max(prev,db);
                while((2*a) < b){
                    a*=2;
                    sum++;
                }
                prev = db;
            }
            System.out.println(sum);
        }
        input.close();
    }
}
