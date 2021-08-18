import java.util.*;
public class C1560 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,s1,s2,start,counter1,counter2;
        while(t--!=0){
            n = input.nextInt();
            s1 = 1;
            start = 1;
            s2 = 1;
            counter1 = 1;
            int st = 1;
            int ct =1;
            while(st < n){
                ct++;
                st = ct*ct;
            }
            while(s1 < n ){
                s1+=start;
                if(s1 > st){
                    s1-=start;
                    break;
                }
                start+=2;
                counter1++;
            }
            if(s1 == n){
                System.out.println(1+" "+counter1);
                continue;
            }
            start = 3;
            counter2 = 1;
            while(s2 < n){
                s2+=start;
                if(s2 > st){
                    s2-=start;
                    break;
                }
                start+=2;
                counter2++;
            }
            if(s2 == n){
                System.out.println(counter2+" "+1);
                continue;
            }
            s1 = Math.abs(n - s1) + 1;
            s2 = Math.abs(n - s2) + 1;
            if(s1 > s2){
                System.out.println(counter2+" "+s2);
            }else{
                System.out.println(s1+" "+counter1);
            }
        }
        input.close();
    }
}
