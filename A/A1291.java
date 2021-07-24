import java.util.Scanner;

public class A1291{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        char[] s;
        String ans;
        int n,sum,add = 0;
        while(t--!=0){
            n = input.nextInt();
            s = input.next().toCharArray();
            sum = 0;
            ans = "";
            for(int i=0;i<n;i++){
                add = Integer.parseInt(Character.toString(s[i]));
                sum+=add;
            }
            if(n == 1){
                System.out.println(-1);
                continue;
            }
            if(sum % 2 == 0 && add % 2 == 1){
                System.out.println(s);
                continue;
            }
            for(int i=n-1;i>=0;i--){
                add = Integer.parseInt(Character.toString(s[i]));
                if(sum % 2 == 0){
                    if(add % 2 == 0){
                        sum-=add;
                        s[i] = '\0';
                    }else{
                        break;
                    }
                }else{
                    if(add % 2 == 0){
                        sum-=add;
                        s[i] = '\0';
                    }else{
                        sum-=add;
                        s[i] = '\0';
                    }
                }
            }
            if(s[0] == '\0'){
                System.out.println(-1);
                continue;
            }
            for(int i=0;i<n;i++){
                if(s[i] == '\0'){
                    continue;
                }
                ans+=s[i];
            }
            System.out.println(ans);
        }
        input.close();
    }
}