import java.util.Scanner;

public class A580 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long maxlen = -1,len=1,num,prev;
        prev = input.nextLong();
        for(int i=1;i<n;i++){
            num = input.nextLong();
            if(num >= prev){
                len++;
            }else if(maxlen < len){
                maxlen = len;
                len = 1;
            }else{
                len = 1;
            }
            prev = num;
        }
        if(len > maxlen){
            maxlen = len;
        }
        input.close();
        System.out.println(maxlen);
    }
}
