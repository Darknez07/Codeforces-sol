import java.util.*;
public class B672 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] counter = new int[26];
        int l = input.nextInt();
        String s = input.next();
        if(l > 26){
            System.out.println(-1);
            input.close();
            return;
        }
        for(int i=0; i<l; i++) {
            counter[s.charAt(i) - 'a']++;
        }
        int sum = 0;
        for(int i=0;i<26;i++){
            if(counter[i] <= 1)
                continue;
            if(counter[i] > 26){
                sum = -1;
                break;
            }
            sum+=(counter[i] - 1);
        }
        System.out.println(sum);
        input.close();
    }
}
