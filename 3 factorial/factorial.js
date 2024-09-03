// javascript program to log factorial usingh recursion
console.log("---FACTORIAL---");

function fact(num) {
  if (num <= 1) {
    return 1;
  } else {
    return num * fact(num - 1);
  }
}

console.log(fact(5));
