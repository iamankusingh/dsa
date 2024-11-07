// Selection sort algorithm in java

public class Selection {
    // sorting fnction
    static void selectionSort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            int smalIndex = i;

            for (int j = i + 1; j < size; j++) {
                if (arr[smalIndex] > arr[j]) {
                    smalIndex = j;
                }
            }
            // swap
            int temp = arr[smalIndex];
            arr[smalIndex] = arr[i];
            arr[i] = temp;
        }

        // to print the sorted array
        System.out.print("Selection sort array is : ");
        for (int i : arr) {
            System.err.print(i + " ");
        }
    }

    // Main Function
    public static void main(String[] args) {
        int array[] = { 7, 8, 4, 9, 3 };
        int size = array.length;

        System.out.print("Orignal array is : ");
        for (int i : array) {
            System.out.print(i + " ");
        }
        System.out.println();

        selectionSort(array, size);
    }
}
