// bubbleSort algorithm in javascript
const array = [12, 7, 14, 3, 9, 6, 2];
console.log("Orignal array ", array);

function bubbleSort(array) {
  const n = array.length;

  for (let i = 0; i < n - 1; i++) {
    let terminateLoop = true;
    for (let j = 0; j < n - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        let temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        terminateLoop = false;
      }
    }
    if (terminateLoop) {
      break;
    }
  }

  return array;
}

console.log("Sorted array is ", bubbleSort(array));
