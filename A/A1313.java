import java.util.Scanner;

public class A1313 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b,c,cnt,tmp;
        while(t--!=0){
            a = input.nextLong();
            b = input.nextLong();
            c = input.nextLong();
            if(b > a){tmp = a; a = b;b = tmp;}
            if(c > a){tmp = a; a = c;c = tmp;}
            if(c > b){tmp = c; c = b;c = tmp;}
            cnt = 0;
            if(a!=0){--a;++cnt;}
            if(b!=0){--b;++cnt;}
            if(c!=0){--c;++cnt;}
            if(a!=0 && b!=0){--a;--b;++cnt;}
            if(a!=0 && c!=0){--a;--c;++cnt;}
            if(c!=0 && b!=0){--c;--b;++cnt;}
            if(c!=0 && b!=0 && a!=0){--c;--b;--a;++cnt;}
            System.out.println(cnt);
        }
        input.close();
    }
}
