let first = 0;
let second = 1;

console.log(first);
console.log(second);

for (let i = 1; i <= 18; i++) {
  let cur = first + second;
  console.log(cur);
  first = second;
  second = cur;
}
