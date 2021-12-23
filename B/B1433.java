import java.util.*;
public class B1433 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,book,start,diff,cnt,i;
        while(t--!=0){
            n = input.nextInt();
            diff = 0;
            start = -1;
            cnt = 0;
            for(i=0;i<n;i++){
                book = input.nextInt();
                if(book == 1){
                    start = i;
                    diff+=cnt;
                    cnt = 0;
                }else{
                    if(start == -1)
                        cnt = 0;
                    else
                        cnt++;
                }
            }
            System.out.println(diff);
        }
        input.close();
    }
}
