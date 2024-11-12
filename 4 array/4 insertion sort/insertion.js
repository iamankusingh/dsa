// insertion sort algorithm in javaScript
const insertionSort = (arr) => {
    const size = array.length;

    for (let i = 1; i < size; i++) {
        let current = arr[i];
        let j = i - 1;

        while (j >= 0 && current < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        // placement
        arr[j + 1] = current;
    }
    // to print sorted array
    console.log(`Insertion sort array is : ${arr}`);
}

const array = [8, 2, 9, 7, 6];
console.log(`Original array is : ${array}`);
insertionSort(array);
