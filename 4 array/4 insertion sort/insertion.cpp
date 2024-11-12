// Insertion sort algorithm in c++
#include <iostream>
using namespace std;

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

    // to print the sorted array
    cout << "Insertion sort array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int array[] = {8, 2, 9, 7, 6};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Orignal array is : ";
    for (int i : array)
    {
        cout << i << " ";
    }
    cout << endl;

    insertionSort(array, size);
}