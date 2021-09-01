import java.util.Scanner;
//Not correct
public class B1527_1 {
    public static boolean Allones(StringBuilder sb) {
        for (int i = 0; i < sb.length(); i++) {
            if (sb.charAt(i) != '1')
                return false;
        }
        return true;
    }

    public static int Palin(StringBuilder sb) {
        StringBuilder sb2 = new StringBuilder(sb);
        sb2.reverse();
        if (sb2 == sb)
            return -1;
        else {
            for (int i = 0; i < sb.length(); i++) {
                if (sb2.charAt(i) != sb.charAt(i))
                    return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        boolean reverse = false;
        int x;
        while (t-- != 0) {
            int[] points = { 0, 0 };
            int turn = 0;
            int len = input.nextInt();
            StringBuilder s = new StringBuilder(input.next());
            if (s.length() == 1)
                System.out.println(s.charAt(0) == '0' ? "BOB" : "ALICE");
            else {
                while (!Allones(s)) {
                    x = Palin(s);
                    if (x == -1) {
                        int n = s.indexOf("0");
                        s = s.replace(n, n + 1, "1");
                        points[turn] += 1;
                        reverse = false;
                    } else {
                        if (!reverse) {
                            s.reverse();
                            reverse = true;
                        } else {
                            s = s.replace(x, x + 1, "1");
                            points[turn] += 1;
                            reverse = false;
                        }
                    }
                    turn = turn == 0 ? 1 : 0;
                }
                if (points[0] == points[1]) {
                    System.out.println("DRAW");
                } else {
                    System.out.println(points[0] > points[1] ? "BOB" : "ALICE");
                }
            }
        }
        input.close();
    }
}
