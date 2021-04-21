import java.util.Scanner;

public class A707{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int color = 0;
        for(int i = 0; i < n; i++){
            for(int j=0;j<m;j++){
                char[] s = input.next().toCharArray();
                if(s[0] == 'B' || s[0] == 'W' || s[0] == 'G')
                    continue;
                else{
                    color = 1;
                    break;
                }
            }
            if(color == 1)
                break;
        }
        input.close();
        if(color == 1)
            System.out.println("#Color");
        else
            System.out.println("#Black&White");
    }
}