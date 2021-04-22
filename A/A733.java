import java.util.Scanner;

public class A733 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char[] arr = input.next().toCharArray();
        int index = -1;
        int dist = 0,get;
        input.close();
        boolean once = false;
        if (arr.length == 1)
            if (arr[0] == 'A' || arr[0] == 'E' || arr[0] == 'O' || arr[0] == 'U' || arr[0] == 'I' || arr[0] == 'Y')
                System.out.println(1);
            else
                System.out.println(2);
        else {
            for (int i = 0; i < arr.length; i++) {
                if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'I'
                        || arr[i] == 'Y') {
                    if (index == -1) {
                        index = i;
                        dist = index + 1;
                        once = true;
                    } else {
                        once = false;
                        index = (i - index);
                        if (index > dist)
                            dist = index;
                        index = i;
                    }
                }
            }
            if(once){
                get = arr.length - dist + 1;
                if(dist > get)
                    System.out.println(dist);
                else
                    System.out.println(get);
            }else{
                if(dist == 0)
                    System.out.println(arr.length+1);
                else{
                    index = arr.length - index;
                    if(index > dist)
                        System.out.println(index);
                    else
                        System.out.println(dist);
                }
            }
        }
    }
}
