import java.util.*;
public class A702{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int prev = input.nextInt();
        int counter = 1,now,max = 0;
        for(int i=1;i<n;i++){
            now = input.nextInt();
            if(now > prev){
                counter++;
            }else{
                max = Math.max(counter, max);
                counter = 1;
            }
            prev = now;
        }
        max = Math.max(max, counter);
        System.out.println(max);
        input.close();
    }
}