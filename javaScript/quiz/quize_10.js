//what is the ouput of this code?
var nums = [10, 45, 19, 3];
const enenize = (num) => {
  if (num % 2 === 1) {
    return num;
  }
};
console.log(nums.filter(enenize).length);
