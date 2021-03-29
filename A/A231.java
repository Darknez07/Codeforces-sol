import java.util.*;
public class A231{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int total = 0;
        for(int i=0;i<n+1;i++){
            String one = in.nextLine();
            String[] solves = one.split(" ");
            int count = 0;
            for(String val: solves){
                if(val.equals("1"))
                    count++;
            }
            if(count >= 2)
                total++;
        }
        System.out.println(total);
        in.close();
    }
}