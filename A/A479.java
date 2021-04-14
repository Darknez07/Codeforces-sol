import java.util.Scanner;

public class A479 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        int max = -1;
        int arr[] = {a+b+c, (a*b)+c, a+(b*c), (a+b)*c, a*(b+c),a*b*c};
        for(int i=0; i<arr.length; i++)
            if(max < arr[i])
                max = arr[i];
        System.out.println(max);
        input.close();
    }
}
