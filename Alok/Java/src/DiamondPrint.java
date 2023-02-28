import java.util.Scanner;

public class DiamondPrint {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
       
        for (int i = 1; i <= n; i++) {
            for (int space = n - i; space >= 1; space--) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();     
        }
        for (int i = 1; i <= n - 1; i++) {
            for (int space = 1; space <= i; space++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= n - i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
