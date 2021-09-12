import java.util.Scanner;

public class A1485 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b,c,count,ans;
        while(t--!=0){
            a = input.nextLong();
            b = input.nextLong();
            if(b > a){
                System.out.println(1);
            }else{
                ans = Long.MAX_VALUE;
                for(long i=0; i * i <= a;i++){
                    if(b == 1 && i == 0)
                        continue;
                    c = a;
                    count = i;
                    while(c!=0){
                        c/=(b + i);
                        count++;
                    }
                    ans = Math.min(ans, count);
                }
                System.out.println(ans);
            }
        }
        input.close();
    }
}
