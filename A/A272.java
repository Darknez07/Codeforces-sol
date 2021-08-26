import java.util.*;
public class A272 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=input.nextInt();
        }
        n++;
        int i,output = 0;
        for(i=1;i<=5;i++){
            if((sum + i) % n != 1)
                output++;
        }
        System.out.println(output);
        input.close();
    }
}
