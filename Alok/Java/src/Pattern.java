import java.util.Scanner;

class Pattern{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int size = 2*n - 1;
        int start_1 = 1;
        int end_1 = size - 2;
        int start_2 = ((n  - 1) + 1) - 1; // to make the index position jan ne ke baad
        int end_2 = ((n - 1) + 1) - 1;
        int arr[] = new int[size];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = n;
        }

        for(int i = 1; i <= 2 * n - 1; i++) {
            if(i <= n){
                for (int j = 0; j < arr.length; j++) {
                    System.out.print(arr[j]);
                }

                for(int j = start_1;j <= end_1;j++){
                    arr[j]--;
                }
                start_1++;
                end_1--;
            }
            else{
                for (int j = start_2; j <= end_2; j++) {
                    arr[j]++;
                }
                for (int j = 0; j < arr.length; j++) {
                    System.out.print(arr[j]);
                }
                end_2++;
                start_2--;
            }
            System.out.println();
        }
    }
}