import java.util.ArrayList;
import java.util.Scanner;
// Arrey dekho ye zinda hain
public class C1547 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int k,m,n,left1,left2;
        int[] poly,mono;
        ArrayList<Integer> lst = new ArrayList<Integer>();
        boolean no;
        while(t--!=0){
            lst.clear();
            k = input.nextInt();
            n = input.nextInt();
            m = input.nextInt();
            mono = new int[n];
            poly = new int[m];
            no = false;
            for(int i=0;i<n;i++){
                mono[i] = input.nextInt();
            }
            for(int i=0;i<m;i++){
                poly[i] = input.nextInt();
            }
            left1 = 0;
            left2 = 0;
            while(left1 < n && left2 < m){
                if(mono[left1] < poly[left2]){
                    lst.add(mono[left1]);
                    left1++;
                }else{
                    lst.add(poly[left2]);
                    left2++;
                }
            }
            while(left1 < n){
                lst.add(mono[left1]);
                left1++;
            }
            while(left2< m){
                lst.add(poly[left2]);
                left2++;
            }
            for(Integer a: lst){
                if(a > k){
                    no = true;
                    break;
                }if(a == 0)
                    k++;
            }
            if(no){
                System.out.print(-1);
            }else{
                for(Integer b: lst){
                    System.out.print(b+" ");
                }
            }
            System.out.println();
        }
        input.close();
    }
}
