// Insertion sort algorithm in java
public class Insertion {
    // sorting function
    static void insertionSort(int arr[]) {
        int size = arr.length;

        for (int i = 1; i < size; i++) {
            int current = arr[i];
            int j = i - 1;

            while (j >= 0 && current < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            // placement
            arr[j + 1] = current;
        }

        // to print the sorted array
        System.out.print("Insertion sort array is : ");
        for (int i : arr) {
            System.err.print(i + " ");
        }
    }

    // Main function
    public static void main(String[] args) {
        int array[] = { 8, 2, 9, 7, 6 };

        System.out.print("Orignal array is : ");
        for (int i : array) {
            System.out.print(i + " ");
        }
        System.out.println();

        insertionSort(array);
    }
}