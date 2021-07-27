import java.util.Scanner;
// Not completed
public class B1550 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int l,a,b;
        String s;
        while(t--!=0){
            l = input.nextInt();
            a = input.nextInt();
            b = input.nextInt();
            s = input.next();
            if(b >=0){
                System.out.println(l*a + l*b);
            }else{
                int group = 1;
                for(int i=0;i<l-1;i++){
                    if(s.charAt(i) == s.charAt(i+1)){
                        continue;
                    }else{
                        group++;
                    }
                }
                System.out.println(a*l + (group/2 + 1)*b);
            }
        }
        input.close();
    }
}
