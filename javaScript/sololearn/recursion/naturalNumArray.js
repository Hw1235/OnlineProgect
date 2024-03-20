function countUp(num) {
  if (num < 1) {
    return [];
  } else {
    const upArray = countUp(num - 1);
    upArray.push(num);
    return upArray;
  }
}

console.log(countUp(5));
