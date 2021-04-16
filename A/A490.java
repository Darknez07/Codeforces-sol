import java.util.Scanner;

public class A490 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a,i=0,j=0,k=0,l=0;
        int[] one = new int[n];
        int[] two = new int[n];
        int[] three = new int[n];
        while(n--!=0){
            a =input.nextInt();
            if(a == 1)
                one[j++] = i+1;
            else if(a == 2)
                two[k++] = i+1;
            else
                three[l++] = i+1;
            i++;
        }
        input.close();
        l=0;
        while(one[l]!=0 && two[l]!=0 && three[l]!=0){
            l++;
        }
        System.out.println(l);
        l=0;
        while(one[l]!=0 && two[l]!=0 && three[l]!=0){
            System.out.println(one[l]+" "+two[l]+" "+three[l]);
            l++;
        }
    }
}
