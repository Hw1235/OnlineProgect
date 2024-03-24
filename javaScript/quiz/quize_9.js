let arr = [2, 3, 4, 5, 6];
var countss = 0;
for (let i = 0; i < arr.length; i++) {
  countss = arr[i] % 2 === 0 ? ++countss : countss;
}
console.log(countss);
