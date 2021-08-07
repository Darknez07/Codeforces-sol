import java.util.Scanner;

public class A1113 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int v = input.nextInt();
        int cost;
        // Buy v - 1 at start and
        // A single liter for each city
        if(n - 1 <= v){
            System.out.println(n - 1);
        }else{
            cost = (v - 1) + ((n - v)*(n - v + 1)/2);
            // So for 10
            // we reach at 3 then take 1 liter each
            System.out.println(cost);
        }
        input.close();
    }
}
