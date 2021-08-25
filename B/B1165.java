import java.util.Collections;
import java.util.Scanner;
import java.util.ArrayList;

public class B1165 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for(int i=0;i<n;i++) list.add(input.nextInt());
        input.close();
        Collections.sort(list);
        int count = 0;
        for(int i=0;i<n;i++){
            // How many values are greater than current one's
            if(list.get(i) >= count + 1)
                count++;
        }
        System.out.println(count);
    }
}
