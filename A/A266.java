import java.util.*;
// Could not solve
// Although it was easy
// I read too much into it
public class A266 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String[] s = input.next().split("");
        int counter = 0;
        for(int i=0;i<n-1;i++){
            if(s[i].equals(s[i+1]))
                counter++;
        }
        input.close();
        System.out.println(counter);
    }
}
