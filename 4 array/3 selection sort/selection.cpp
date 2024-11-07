// Selection sort algorithm in c++
#include <iostream>
using namespace std;

// sorting function
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int smalIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[smalIndex] > arr[j])
            {
                smalIndex = j;
            }
        }
        // swap
        int temp = arr[smalIndex];
        arr[smalIndex] = arr[i];
        arr[i] = temp;
    }

    // to print the sorted array
    cout << "Selection sort array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Main function
int main()
{
    int array[] = {7, 8, 4, 9, 3};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Orignal array is : ";
    for (int i : array)
    {
        cout << i << " ";
    }
    cout << endl;

    selectionSort(array, size);
}