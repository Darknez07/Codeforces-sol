import java.util.Scanner;

public class B266 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int t = input.nextInt();
        char[] s = input.next().toCharArray();
        char temp;
        while(t--!=0){
            for(int i=0;i<n-1;i++){
                if(s[i+1] == 'G' && s[i] == 'B'){
                    temp = s[i+1];
                    s[i+1] = s[i];
                    s[i] = temp;
                    i++;
                }
            }
        }
        System.out.println(new String(s));
        input.close();
    }
}
