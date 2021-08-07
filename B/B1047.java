import java.util.Scanner;

public class B1047 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[][] points;
        int n = input.nextInt();
        long val = 0;
        points = new int[n][2];
        for (int i = 0; i < n; i++) {
            points[i][0] = input.nextInt();
            points[i][1] = input.nextInt();
        }
        for(int i=0;i<n;i++){
            if(val < (long)(points[i][0] + points[i][1]))
                val = (long)(points[i][0] + points[i][1]);
        }
        System.out.println(val);
        input.close();
    }
}
