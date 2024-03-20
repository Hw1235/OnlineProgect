function fac(num) {
  if (num == 1) {
    return num;
  } else {
    return num * fac(num - 1);
  }
}
console.log(fac(5));
