function fibonacci(num) {
  if (num < 2) console.log(num);
  else console.log(fibonacci(num - 1) + fibonacci(num - 2));
}
fibonacci(5);
