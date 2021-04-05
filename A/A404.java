import java.util.Scanner;

public class A404 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        char[][] ch = new char[n][n];
        for (int i = 0; i < n; i++) {
            ch[i] = input.next().toCharArray();
        }
        input.close();
        boolean no = false;
        char letter = ch[0][0];
        for (int i = 1; i < n; i++) {
            if (letter != ch[i][i]) {
                no = true;
                break;
            }
        }
        if (no) {
            System.out.println("NO");
        } else {
            for (int i = n - 1; i >= 0; i--) {
                if (letter != ch[n - 1 - i][i]) {
                    no = true;
                    break;
                }
            }
            if (no)
                System.out.println("NO");
            else {
                char letter2 = ch[0][1];
                    for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i == j || i + j == n - 1)
                            continue;
                        else if (letter2 != ch[i][j] || letter == ch[i][j]) {
                            no = true;
                            break;
                        }
                    }
                    if (no)
                        break;
                    }
                    if (no)
                        System.out.println("NO");
                    else
                        System.out.println("YES");
                }
            }
        }
    }