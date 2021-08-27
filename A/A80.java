import java.util.*;
public class A80 {
    public static boolean Find_Prime(int n){
        for(int i=2;i<n;i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        boolean done = false;
        if(m % 2 == 0){
            System.out.println("NO");
            input.close();
            return;
        }else{
            for(int i=n + 1;i<m;i++){
                if(Find_Prime(i)){
                    done = true;
                    break;
                }
            }
        }
        System.out.println(done ? "NO":(Find_Prime(m) ? "YES": "NO"));
        input.close();
    }
}
