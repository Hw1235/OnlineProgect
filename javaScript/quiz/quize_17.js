var x = new Array(1, 2, 3, 4, 5);
var count = 0;
for (var i = 1; i < 5; i++) {
  if (x[i] > i) {
    //1-2-/===> 3,4,5
    count = count + 1; //1+1+1+1
  }
}
console.log(count);
