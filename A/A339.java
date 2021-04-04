import java.util.*;
public class A339{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] s = input.next().split("\\+");
        int[] nums = new int[s.length];
        input.close();
        for(int i=0;i<s.length;i++){
            nums[i] = Integer.parseInt(s[i]);
        }
        int temp;
        for(int i=0;i<s.length;i++){
            for(int j=i;j<s.length;j++){
                if(nums[i] > nums[j]){
                    temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        String f = String.valueOf(nums[0]);
        for(int i=1;i<s.length;i++)
            f= f+"+"+String.valueOf(nums[i]);
        System.out.println(f);
    }
}