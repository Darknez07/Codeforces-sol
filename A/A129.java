import java.util.Scanner;

public class A129 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int f,sum=0;
        int[] counter =  new int[101];
        for(int i=0;i<n;i++){
            f = input.nextInt();
            sum+=f;
            counter[f]++;
        }
        int ways = 0;
        if(sum % 2 == 0){
            for(int i=0;i<101;i++){
                if(i % 2 == 0){
                    ways+=counter[i];
                }
            }
        }else{
            for(int i=0;i<101;i++){
                if(i  % 2 == 1){
                    ways+=counter[i];
                }
            }
        }
        System.out.println(ways);
        input.close();
    }
}
