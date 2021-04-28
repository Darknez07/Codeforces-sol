import java.util.Scanner;

public class A520 {
    public static void main(String[] args) {
        int[] counter = new int[26];
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.next();
        input.close();
        int i=0;
        boolean no = false;
        while(i!=n){
            counter[Character.toLowerCase(s.charAt(i)) - 'a']++;
            i++;
        }
        for(i=0;i<26;i++){
            if(counter[i] == 0){
                no = true;
                break;
            }
        }
        if(no){
            System.out.println("NO");
        }else{
            System.out.println("YES");
        }
    }
}
