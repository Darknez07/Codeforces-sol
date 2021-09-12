import java.util.Scanner;

public class A1555 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long l;
        while(t--!=0){
            l = input.nextLong();
            // Every pizza common unit 2 slices in 5 mins
            // We don't care about even
            // But odd numbers piss off because of extra slice;
            System.out.println(Math.max(((l+1)/2)*5, 15));
        }
        input.close();
    }
}
