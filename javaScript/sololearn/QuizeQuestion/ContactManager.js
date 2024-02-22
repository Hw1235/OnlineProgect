function contact(name, number) {
  this.name = name;
  this.number = number;
}

var a = new contact("Monir", 1331);
var b = new contact("sojeeb", 654);
console.log(a.print());
console.log(b.print());
