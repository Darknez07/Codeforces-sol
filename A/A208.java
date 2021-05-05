import java.util.Scanner;

public class A208 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String line = input.next();
        line = line.replace("WUB", " ").replaceAll("\\s{2,}"," ").trim();
        System.out.println(line);
        input.close();
    }
}
