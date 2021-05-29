import java.util.Scanner;
// taken from https://github.com/DionysiosB/CodeForces
public class A1182 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        // Every two blocks make 2x3
        // Replicating on left side, upside, downside,rightside
        // Makes 3xN shapes via different ways
        // Hence for each increase with power of 2
        long ans = n % 2 == 1 ? 0 : (1 << (n/2));
        System.out.println(ans);
        input.close();
    }
}
