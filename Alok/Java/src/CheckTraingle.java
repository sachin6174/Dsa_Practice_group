import java.util.Scanner;

public class CheckTraingle {
    /*
     * if a^2+b^2>c^2, the triangle is acute,
     * if a^2+b^2=c^2, the triangle is a right triangle,
     * if a^2+b^2<c^2, the triangle is obtuse,
     */    
public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int side1 = in.nextInt();
        int side2 = in.nextInt();
        int side3 = in.nextInt();
        if(side1 + side2 > side3){
        int squareSide1 = side1 * side1;
        int squareSide2 = side2 * side2;
        int squareSide3 = side3 * side3;
        
        if(squareSide1 + squareSide2 > squareSide3){
            System.out.println("Actute");
        }else if(squareSide1 + squareSide2 == squareSide3){
            System.out.println("Right traingle");
        }else{
            System.out.println("Obtuse");
        }
    }else{
        System.out.println("Bhai kya kar raha hai tu\nTriangle nahi hai");
    }

    }
    
}
