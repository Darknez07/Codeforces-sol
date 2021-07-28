import java.util.Scanner;
public class B1537 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,m,i,j;
        while(t--!=0){
            n = input.nextLong();
            m = input.nextLong();
            i = input.nextLong();
            j = input.nextLong();
            if((i == 1 && j == 1) || (i == n && j == m)){
                System.out.println(1+" "+m+" "+n+" "+1);
            }else{
                System.out.println(1+" "+1+" "+n+" "+m);
            }
        }
        input.close();
    }
}
