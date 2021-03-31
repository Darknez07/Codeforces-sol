import java.util.*;
import java.lang.Math;
public class A263 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n=0,m=0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(input.nextInt() == 1){m=i;n=j;}
            }
        }
        input.close();
        System.out.println(Math.abs(m - 2)+Math.abs(n - 2));
    }
}
