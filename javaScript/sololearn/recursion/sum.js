function sum(arr, n) {
  if (n <= 0) {
    console.log(0);
  } else {
    return sum(arr, n - 1) + arr[n - 1];
  }
}
sum([2, 3, 4, 5], 3);
