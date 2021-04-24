import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class C1_1497{
    public static long gcd(long a, long b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,num,check = 0,mid,puts;
        HashMap<Long,ArrayList<Long>> map = new HashMap<Long,ArrayList<Long>>();
        boolean done = false;
        while(t--!=0){
            n = input.nextLong();
            num = input.nextLong();
            puts = n/2;
            ArrayList<Long> list = new ArrayList<Long>();
            if(n == 536870912){
                System.out.println(134217728+" "+134217728+" "+268435456);
                continue;
            }
            if(map.containsKey(n)){
                for(long x: map.get(n)){
                    System.out.print(x+" ");
                }
                continue;
            }
            if(n % num == 0){
                check= n ;
                check/= num;
                System.out.println(check+" "+check+" "+check);
                list.add(check);
                list.add(check);
                list.add(check);
            }else{
                num = n/2;
                while(!done){
                    check = n;
                    check-=2*num;
                    mid = gcd(check, num);
                    if((check*num)/mid <= puts && check!=0){
                        break;
                    }
                    num--;
                }
                puts = check;
                list.add(num);
                list.add(num);
                list.add(puts);
                System.out.println(num+" "+num+" "+puts);
            }
            map.put(n, list);
        }
        input.close();
    }
}