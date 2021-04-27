import java.util.Random;
import java.util.Scanner;
// This was accepted after so much hasssle
public class A584 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int len = input.nextInt();
        int divide = input.nextInt();
        input.close();
        String s = "";
        int rand, sum = 0;
        Random r = new Random();
        if (divide == 2) {
            for (int i = 0; i < len - 1; i++) {
                rand = r.nextInt(10);
                s += Integer.toString(rand <= 0 ? 1 : rand);
            }
            s += "4";
        } else if (divide == 3) {
            for (int i = 0; i < len - 1; i++) {
                rand = r.nextInt(10);
                rand = rand <= 0 ? 1 : rand;
                sum += rand;
                s += Integer.toString(rand);
            }
            rand = (3 - (sum % 3));
            s += Integer.toString(rand);
        } else if (divide == 4) {
            for (int i = 0; i < len - 2; i++) {
                rand = r.nextInt(10);
                rand = rand <= 0 ? 1 : rand;
                s += Integer.toString(rand);
            }
            if (len >= 2) {
                s += "4";
                s += "8";
            } else if (len == 1) {
                s += "4";
            }
        } else if (divide == 5) {
            for (int i = 0; i < len - 1; i++) {
                rand = r.nextInt(10);
                rand = rand <= 0 ? 1 : rand;
                s += Integer.toString(rand);
            }
            s += len % 2 == 0 ? "0" : "5";
        } else if (divide == 6) {
            if (len > 2) {
                for (int i = 0; i < len - 2; i++) {
                    rand = r.nextInt(10);
                    rand = rand <= 0 ? 1 : rand;
                    s += Integer.toString(rand);
                    sum += rand;
                }
                rand = 3 - (sum % 3);
                if (rand == 0)
                    s += "00";
                else if (rand == 1)
                    s += "10";
                else
                    s += "02";
            } else if (len == 2) {
                s += "36";
            } else if (len == 1) {
                s += "6";
            }
        } else if (divide == 7) {
            if (len > 3) {
                s += "147";
                for (int i = 0; i < len - 3; i++)
                    s += "7";
            } else if (len == 1) {
                s += "7";
            } else if (len == 2) {
                s += "14";
            } else {
                s += "147";
            }
        } else if (divide == 8) {
            for (int i = 0; i < len - 3; i++) {
                rand = r.nextInt(10);
                rand = rand <= 0 ? 1 : rand;
                s += Integer.toString(rand);
            }
            if (len > 2) {
                s += "888";
            } else if (len == 2) {
                s += "88";
            } else {
                s += "8";
            }
        } else if (divide == 9) {
            for (int i = 0; i < len - 1; i++) {
                rand = r.nextInt(10);
                rand = rand <= 0 ? 1 : rand;
                sum += rand;
                s += Integer.toString(rand);
            }
            rand = 9 - (sum % 9);
            s += Integer.toString(rand);
        } else {
            if (len == 1) {
                s += "-1";
            } else {
                for (int i = 0; i < len - 1; i++) {
                    rand = r.nextInt(10);
                    rand = rand <= 0 ? 1 : rand;
                    s += Integer.toString(rand);
                }
                s += "0";
            }
        }
        System.out.println(s);
    }
}
