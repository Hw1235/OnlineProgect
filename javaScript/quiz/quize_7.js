//what is the output of this code?
function solution(x, y, d) {
  let distance = y - x;
  if (distance % d === 0) {
    return distance / d; //4
  } else {
    return Math.ceil(distance / d);
  }
}
console.log(solution(10, 30, 5));
