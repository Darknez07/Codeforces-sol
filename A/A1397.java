import java.util.*;
public class A1397 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        int[] counter;
        char[] ch;
        boolean no = false;
        while(t--!=0){
            counter = new int[26];
            n = input.nextInt();
            no = false;
            for(int i=0;i<n;i++){
                ch = input.next().toCharArray();
                for(int j=0;j<ch.length;j++){
                    counter[ch[j] - 'a']++;
                }
            }
            for(int i=0;i<26;i++){
                if(counter[i] == 0)
                    continue;
                if(counter[i] % n != 0){
                    no = true;
                    break;
                }
            }
            System.out.println(no ? "NO":"YES");
        }
        input.close();
    }
}
