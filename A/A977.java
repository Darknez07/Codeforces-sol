import java.util.*;
public class A977 {
    public int GetResult(int num, int k){
        if(k == 0)
            return num;
        else{
            if(num % 10 == 0)
                return GetResult(num / 10,k-1);
            else
                return GetResult(num-1, k-1);
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        input.close();
        A977 a = new A977();
        System.out.println(a.GetResult(n, k));

    }
}
