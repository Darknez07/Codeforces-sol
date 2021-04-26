import java.util.Scanner;

public class A148 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        int l = input.nextInt();
        int n = input.nextInt();
        int m = input.nextInt();
        int d = input.nextInt();
        int left = 0;
        input.close();
        if(k == 1 || l == 1 || n == 1 || m == 1)
            System.out.println(d);
        else{
            for(int i=1;i<=d;i++)
                if(i % k==0)
                    continue;
                else if(i % l == 0)
                    continue;
                else if(i % m ==0)
                    continue;
                else if(i % n == 0)
                    continue;
                else
                    left++;
            System.out.println(d - left);
        }
    }
}
