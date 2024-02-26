function contact(name, number) {
  this.name = name;
  this.number = number;

  this.print = function () {
    document.write("Name: " + this.name + ", Number:   " + this.number);
  };
}

var a = new contact("Monir", 1331);
var b = new contact("sojeeb", 654);
a.print();
b.print();
