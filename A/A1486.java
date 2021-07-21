import java.util.Scanner;

public class A1486{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        long a,sum,least;
        while(t--!=0){
            n = input.nextInt();
            sum = 1;
            least = 0;
            for(int i=0;i<n;i++){
                a = input.nextLong();
                a+=least;
                if(a < i){sum = 0;}
                least = a - i;
            }
            if(sum == 0){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }
        }
        input.close();
    }
}