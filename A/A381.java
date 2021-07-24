import java.util.Scanner;

public class A381 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] p = new int[n];
        for (int i = 0; i <n;i++){
            p[i] = input.nextInt();
        }
        input.close();
        int left = 0;
        int right = n - 1;
        int i = 0,seerja = 0, dima = 0;
        while(right >= left){
            if(i % 2 == 0){
                seerja+=(p[left] > p[right] ? p[left++]: p[right--]);
            }else{
                dima+=(p[left] > p[right] ? p[left++]: p[right--]);
            }
            i++;
        }
        System.out.println(seerja+" "+dima);
    }
}
