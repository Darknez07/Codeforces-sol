import java.util.Scanner;
// Not complete
public class B1537 {
    /* Here we go /* Kaise */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,m,i,j;
        while(t--!=0){
            m = input.nextLong();
            n = input.nextLong();
            i = input.nextLong();
            j = input.nextLong();
            long val = Math.max(Math.max(Math.max((Math.abs(m - i) + Math.abs(n - j)),(Math.abs(m - i) + Math.abs(1 - j))),(Math.abs(n - j) + Math.abs(1 - i))),(Math.abs(1 - i) + Math.abs(1 - j)));
            if(val == (Math.abs(m - i) + Math.abs(n - j))){
                System.out.println(m+" "+n+" "+m+" "+1);
            }else if(val == (Math.abs(m - i) + Math.abs(1 - j))){
                System.out.println(m+" "+1+" "+(m-1)+" "+2);
            }else if(val == (Math.abs(n - j) + Math.abs(1 - i))){
                System.out.println(1+" "+n+" "+1+" "+(n-1));
            }else{
                System.out.println(1+" "+1+" "+1+" "+2);
            }
        }
        input.close();
    }
}
