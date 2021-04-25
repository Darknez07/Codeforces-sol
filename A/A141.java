import java.util.Scanner;

public class A141 {
    public static void main(String[] args) {
        int[] counter = new int[26];
        int t=2;
        String middle;
        boolean no = false;
        Scanner input = new Scanner(System.in);
        while(t--!=0){
            middle = input.next();
            for(int i=0;i<middle.length();i++){
                counter[middle.charAt(i) - 'A']++;
            }
        }
        middle = input.next();
        for(int i=0;i<middle.length();i++){
            counter[middle.charAt(i) - 'A']--;
        }
        input.close();
        for(int i=0;i<26;i++){
            if(counter[i]!=0){
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
