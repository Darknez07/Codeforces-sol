import java.util.Scanner;
// Copied from https://github.com/DionysiosB/CodeForces
public class B158 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] arr = new int[5];
        while(t--!=0){
            arr[input.nextInt()]++;
        }
        input.close();
        // This start with 4 children
        long total = arr[4];
        // Only 3 children
        total+= arr[3];
        // Only 4 by 2 groups
        arr[1]-=arr[3];
        // Two groups of 2 and left out 1 child
        total+= arr[2]/2 + arr[2] % 2;
        // Take forming 2 + 1 to 3
        arr[1]-=2*(arr[2]%2);
        // If one's are left;
        if(arr[1] > 0){total+=arr[1]/4 + (arr[1] % 4 == 0? 0 : 1);}
        System.out.println(total);
    }
}
