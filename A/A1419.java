import java.util.Scanner;

public class A1419 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        char[] ch;
        boolean raze;
        int n,an;
        while(t--!=0){
            n = input.nextInt();
            ch = input.next().toCharArray();
            if(n % 2 == 0){
                raze = true;
                for(int i=0;i<n;i++){
                    an = Character.valueOf(ch[i]);
                    if(an % 2 == 0 && i % 2 == 1){
                        raze = false;
                        break;
                    }
                }
                System.out.println(raze ? 1 : 2);
            }else{
                raze = false;
                for(int i=0;i<n;i++){
                    an = Character.valueOf(ch[i]);
                    if(an % 2 == 1 && i % 2 == 0){
                        raze = true;
                        break;
                    }
                }
                System.out.println(raze ? 1 : 2);
            }
        }
        input.close();
    }
}
