import java.util.Scanner;

public class B919{
    public static boolean isPerfect(long x){
        int s = 0;
        while(x > 0){s+=(x%10);x/=10;}
        return (s == 10);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        input.close();
        int count = 0;
        for(long p=0;p< 1e9;p++){
            if(!isPerfect(p)){continue;}
            ++count;
            if(count == num){System.out.println(p);break;}
        }
    }
}