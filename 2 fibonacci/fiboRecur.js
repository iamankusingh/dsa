console.log(0);
console.log(1);

let counter = 2;

function fibo(first, second) {
  if (counter <= 15) {
    let cur = first + second;
    console.log(cur);
    second = first;
    first = cur;
    counter += 1;
    fibo(first, second);
  } else {
    return;
  }
}

fibo(1, 0);
