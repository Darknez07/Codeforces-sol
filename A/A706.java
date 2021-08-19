import java.util.*;
public class A706 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        double x,y,v;
        int n = input.nextInt();
        double minTime = 1000.000;
        while(n--!=0){
            x = input.nextDouble();
            y = input.nextDouble();
            v = input.nextDouble();
            minTime = Math.min(minTime, Math.sqrt(((x - a)*(x - a) + (y - b)*(y - b)))/v);
        }
        System.out.println(String.format("%.16f",minTime));
        input.close();
    }
}
