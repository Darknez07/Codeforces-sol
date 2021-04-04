import java.util.Scanner;

public class A344 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b;
        int preva=-1,prevb=-1;
        int group = 1;
        while(t--!=0){
            String[] q = input.next().split("");
            a = Integer.parseInt(q[0]);
            b = Integer.parseInt(q[1]);
            if(preva != -1 && prevb != -1)
                if(prevb==a)
                    group++;
            preva = a;
            prevb = b;
        }
        input.close();
        System.out.println(group);
    }
}
