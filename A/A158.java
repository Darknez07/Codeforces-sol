import java.util.*;
public class A158 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int min = input.nextInt();
        int[] storage = new int[num];
        for(int i=0;i<num;i++){
            storage[i] = input.nextInt();
        }
        int count = 0;
        int check = storage[min - 1];
        for(int i=0;i<num;i++){
            if(storage[i] < check)
                break;
            if(storage[i] == 0)
                continue;
            count++;
        }
        input.close();
        System.out.println(count);
    }
}
