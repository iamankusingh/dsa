const selectionSort = (arr) => {
    size = arr.length;
    for (let i = 0; i < size - 1; i++) {
        let smalIndex = i;

        for (let j = i + 1; j < size; j++) {
            if (arr[smalIndex] > arr[j]) {
                smalIndex = j;
            }
        }
        // swap
        const temp = arr[smalIndex];
        arr[smalIndex] = arr[i];
        arr[i] = temp;
    }

    console.log(`Selection sort array is ${arr}`);
}

const array = [7, 8, 4, 9, 3];

console.log(`Original array is ${array}`);

selectionSort(array)
