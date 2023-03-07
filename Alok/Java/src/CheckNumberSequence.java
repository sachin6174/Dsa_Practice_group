import java.util.Scanner;

public class CheckNumberSequence {
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        } 
        
        int []compare = new int[n - 1];
        for (int i = 0; i < arr.length - 1; i++) {
            compare[i] = arr[i] - arr[i + 1]; 
        }

        for(int i = 0; i < compare.length; i++) {
            if(compare[i] == 0){
                System.out.println("false");
                break;
            }
        }
        // for (int i : compare) {
        //     System.out.print(i + " ");
        // }
        int count = 0;
        for(int i = 0;i < compare.length - 1;i++){
            if((compare[i] > 0 && compare[i + 1]  < 0)|| (compare[i] < 0 && compare[i + 1] > 0)){
                count++;
            }
        }
        // System.out.println("count " + count);
        if(count >= 2){
            System.out.println("false");
        }else{
            System.out.println("true");
        }
        }
}
