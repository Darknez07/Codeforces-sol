import java.util.Scanner;

public class B1216 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = input.nextInt();
        }
        int[] indexes = new int[n];
        int max,score=0;
        for(int i=0;i<n;i++){
            max = i;
            for(int j=0;j<n;j++){
                if(a[max] < a[j])
                    max = j;
            }
            indexes[i] = max;
            score+=(a[max]*i + 1);
            a[max] = -1;
        }
        System.out.println(score);
        for(int i=0;i<n;i++){
            System.out.print((indexes[i] + 1)+" ");
        }
        input.close();
    }
}
