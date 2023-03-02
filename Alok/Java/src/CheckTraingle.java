import java.util.Arrays;
import java.util.Scanner;

public class CheckTraingle {
    /*
     * if a^2+b^2>c^2, the triangle is acute,
     * if a^2+b^2=c^2, the triangle is a right triangle,
     * if a^2+b^2<c^2, the triangle is obtuse,
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[] = new int[3];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }

        Arrays.sort(arr);
        if (arr[0] + arr[1] > arr[2]) {
            int squareSide1 = arr[0] * arr[0];
            int squareSide2 = arr[1] * arr[1];
            int squareSide3 = arr[2] * arr[2];

            if (squareSide1 + squareSide2 > squareSide3) {
                System.out.println("Actute");
            } else if (squareSide1 + squareSide2 == squareSide3) {
                System.out.println("Right traingle");
            } else {
                System.out.println("Obtuse");
            }
        } else {
            System.out.println("Bhai kya kar raha hai tu\nTriangle nahi hai");
        }

    }

}
