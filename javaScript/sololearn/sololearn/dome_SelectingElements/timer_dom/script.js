function setText() {
  var a = document.getElementById("tex");
  var arr = a.childNodes;

  for (let i = 0; i < arr.length; i++) {
    arr[i].innerHTML = "add new text";
  }
}
setTimeout(setText, 500);
