import java.util.Scanner;

public class A1203 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        int arr[];
        int diff,ndiff;
        boolean no = false;
        while (t-- != 0) {
            no = false;
            n = input.nextInt();
            arr = new int[n];
            diff = -2;
            for(int i=0;i<n;i++){
                arr[i] = input.nextInt();
            }
            if(n == 1){
                if(Math.abs(arr[0]) == 1)
                    System.out.println("YES");
                else
                    System.out.println("NO");
            }
            else{
                for(int i=1;i<n;i++){
                    if(arr[i] == n && arr[i-1] == 1){
                        if(diff == -2)
                            diff = 1;
                        else if(diff != 1){
                            no = true;
                            break;
                        }
                    }else if(arr[i] == 1 && arr[i-1] == n){
                        if(diff == -2)
                            diff = -1;
                        else if(diff != -1){
                            no = true;
                            break;
                        }
                    }else{
                        if(diff == -2){
                            diff = arr[i-1] - arr[i];
                            if(Math.abs(diff)!=1){
                                no = true;
                                break;
                            }
                            continue;
                        }else{
                            ndiff = arr[i-1] - arr[i];
                            if(ndiff != diff){
                                no = true;
                                break;
                            }
                        }
                    }
                }
                if(no){
                    System.out.println("NO");
                }else{
                    System.out.println("YES");
                }
            }
        }
        input.close();
    }
}