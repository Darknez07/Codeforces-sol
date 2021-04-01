import java.util.Scanner;

public class A118 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char[] arr = input.next().toLowerCase().toCharArray();
        String ans= "";
        input.close();
        for(int i=0;i<arr.length;i++) {
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y'){
                continue;
            }else{
                ans+=".";
                ans+=arr[i];
            }
        }
        System.out.println(ans);
    }
}
