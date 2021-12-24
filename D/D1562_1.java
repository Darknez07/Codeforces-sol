import java.util.*;
public class D1562_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,q;
        char[] ch;
        int start,end,pow,sum = 0;
        while(t--!=0){
            n = input.nextInt();
            q = input.nextInt();
            ch = input.next().toCharArray();
            while(q--!=0){
                start = input.nextInt();
                end = input.nextInt();
                sum = 0;
                for(int i=start;i<end;i++){
                    pow = (i % 2 == 0 ? 1: -1);
                    if(ch[i] == '-'){
                        sum+=(-1*pow);
                    }else{
                        sum+=(1*pow);
                    }
                }
                // if(sum == 0){System.out.println(sum);continue;}
                System.out.println(Math.abs(sum) % 2 == 0 ? 1: 2);
            }
        }
        input.close();
    }
}
