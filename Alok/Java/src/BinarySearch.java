import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }   
        Arrays.sort(arr);
        System.out.println("Array after sorting: ");
        for (int x : arr) {
            System.out.print(x + " ");
        }
        System.out.println();
        System.out.println("Enter the number that you want to search: ");
        int num = in.nextInt();
        binarySearch(arr,num);
    }

    private static void binarySearch(int[] arr, int x) {
        int i = 0;
        int j = arr.length - 1;
        boolean found = false;
        int index = -1;
        while(i <= j && !found){
            int mid = (i + j) / 2;
            if(arr[mid] == x){
                index = mid;
                found = true;
            }else if(arr[i] > x){
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }

        System.out.println(x + " is found at index " + index);
    }
}
