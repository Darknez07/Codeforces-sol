import java.util.Scanner;

public class A237 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] times = new int[3601];
        int h,m;
        for(int i=0;i<n;i++){
            h = input.nextInt();
            m = input.nextInt();
            m+=(h*60);
            times[m]++;
        }
        input.close();
        int max = 0;
        for(int i=0;i<=3600;i++){
            if(times[i] > max)
                max = times[i];
        }
        System.out.println(max);
    }
}
