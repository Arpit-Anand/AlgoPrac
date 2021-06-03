//Program to reverse an array with O(n) time 

import java.util.Scanner;

class Reverse{
    static int[] arr = new int[10];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements");
        int l = sc.nextInt();
        System.out.println("Enter array elements");
        for(int i=0; i<l; i++){
            arr[i] = sc.nextInt();
        }

        for(int i=0; i<l/2; i++){
            arr[i] = arr[i] + arr[l-i-1];
            arr[l-i-1] = arr[i] - arr[l-i-1];
            arr[i] = arr[i] - arr[l-i-1];
        }
        System.out.println("Reversed Array");
        for(int i=0; i<l; i++){
            System.out.print(arr[i]);
        }
        System.out.println();
        sc.close();
    }
}
