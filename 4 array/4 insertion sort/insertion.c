// insertion sort algorithm in c
#include <stdio.h>

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // placement
        arr[j + 1] = current;
    }

    // to print sorted array
    printf("Insertion sort array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int array[] = {8, 2, 9, 7, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Orignal array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    insertionSort(array, size);
}