import java.util.Scanner;

public class A427 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int hired = 0,mid,crime=0;
        while (t--!=0){
            mid = input.nextInt();
            if(mid >= 1)
                hired+=mid;
            else if(mid == -1)
                if(hired > 0)
                    hired--;
                else
                    crime++;
        }
        input.close();
        System.out.println(crime);
    }
}
