var everything = {
  answer: 24,
  write: function () {
    console.log(this.answer);
  },
};

var nothing = {
  answer: 42,
  write: function () {
    console.log(44);
  },
};
var something = everything.write.bind(nothing);
something();
