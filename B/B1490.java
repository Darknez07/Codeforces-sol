import java.util.Scanner;
// Bad code must improve
public class B1490 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,cost=0,have;
        while(t--!=0){
            int[] arr = new int[3];
            int[] need = new int[3];
            int[] extra = new int[3];
            cost = 0;
            n = input.nextInt();
            have = n/3;
            for(int i=0;i<n;i++){
                arr[input.nextInt() % 3]++;
            }
            for(int i=0;i<3;i++){
                if(arr[i] > have)
                    extra[i] = arr[i] - have;
                else
                    need[i] = have - arr[i];
            }
            for(int i=0;i<3;i++){
                if(need[i]!=0 && i == 0){
                    if(need[i] >= extra[2]){
                        cost+=(extra[2]*1);
                        need[i]-=extra[2];
                        if(need[i] >= extra[1]){
                            cost+=(extra[1]*2);
                            need[i]-=extra[1];
                        }else{
                            cost+=(need[i]*2);
                            extra[1]-=need[i];
                            need[i] = 0;
                        }
                    }else{
                        cost+=(need[i]*1);
                        extra[2]-=need[i];
                        need[i] = 0;
                    }
                }
                if(need[i]!=0 && i == 1){
                    if(need[i] >= extra[0]){
                        cost+=(extra[0]*1);
                        need[i]-=extra[0];
                        if(need[i] >= extra[2]){
                            cost+=(extra[2]*2);
                            need[i]-=extra[2];
                        }else{
                            cost+=(need[i]*2);
                            extra[2]-=need[i];
                            need[i] = 0;
                        }
                    }else{
                        cost+=(need[i]*1);
                        extra[0]-=need[i];
                        need[i] = 0;
                    }
                }
                if(need[i]!=0 && i == 2){
                    if(need[i] >= extra[1]){
                        cost+=(extra[1]*1);
                        need[i]-=extra[1];
                        if(need[i] >= extra[0]){
                            cost+=(extra[0]*2);
                            need[i]-=extra[0];
                        }else{
                            cost+=(need[i]*2);
                            extra[0]-=need[i];
                            need[i] = 0;
                        }
                    }else{
                        cost+=(need[i]*1);
                        extra[1]-=need[i];
                        need[i] = 0;
                    }
                }
            }
            System.out.println(cost);
        }
        input.close();
    }
}
