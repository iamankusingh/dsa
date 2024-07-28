// javaScript program to find minimum value from array
const dataArray = [52, 57, 17, 90, 76, 24, 89, 14, 36, 47, 39, 58, 21, 49];

minValue = dataArray[0];

dataArray.forEach((element) => {
  if (element < minValue) {
    minValue = element;
  }
});

console.log(`Minimum value is ${minValue}`);
