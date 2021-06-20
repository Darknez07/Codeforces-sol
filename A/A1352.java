import java.util.Scanner;

public class A1352 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] nums = new int[t];
        int i =0;
        int count =0;
        int mid = 0;
        int inside;
        int ans;
        while(t--!=0){
            nums[i] = input.nextInt();
            count = 0;
            inside = nums[i];
            while(inside!=0){
                mid = inside % 10;
                if(mid!=0)
                    count++;
                inside/=10;
            }
            System.out.println(count);
            inside =0;
            while(nums[i]!=0){
                mid = nums[i] % 10;
                ans = (int)(mid * Math.pow(10, inside));
                if(ans!=0)
                    System.out.print(ans+" ");
                nums[i]/=10;
                inside++;
            }
            System.out.println();
            i++;
        }
        input.close();
    }
}
