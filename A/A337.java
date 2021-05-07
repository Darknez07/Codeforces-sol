import java.util.Arrays;
import java.util.Scanner;

public class A337 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int students = input.nextInt();
        int puzzles = input.nextInt();
        int[] arr = new int[puzzles];
        for(int i=0;i<puzzles;i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        int min = Integer.MAX_VALUE;
        for(int i=students-1;i<puzzles;i++){
            if(Math.abs(arr[i] - arr[i - students + 1]) < min)
                min = Math.abs(arr[i] - arr[i - students + 1]);
        }
        System.out.println(min);
        input.close();
        // System.out.println(arr[students - 1] - arr[0]);
    }
}
