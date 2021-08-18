import java.util.Scanner;

public class B1525 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t  = input.nextInt();
        int loc1,locn,n,val,counter;
        while(t--!=0){
            n = input.nextInt();
            counter = 0;
            loc1 =0;
            locn = 0;
            for(int i=0;i<n;i++){
                val = input.nextInt();
                if(val == i + 1)
                    counter++;
                if(val == 1)
                    loc1 = i;
                if(val == n)
                    locn = i;
            }
            if(counter == n)
                System.out.println(0);
            else if(loc1 == 0 || locn == n - 1)
                System.out.println(1);
            else if(loc1 == n - 1 && locn == 0)
                System.out.println(3);
            else
                System.out.println(2);
        }
        input.close();
    }
}
