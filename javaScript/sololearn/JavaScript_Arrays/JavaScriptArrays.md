**_Java Script Arrays_**
**Arrays** store multiple values in a single variable.

To store three course names, you neeed three varibles. Like:

```js
var course1 = "HTMl";
var course2 = "CSS";
var Course3 = "js";
```

But what if you had 500 course? The colution is an array.

```js
var course = new Array("HTML", "CSS", "JS");
```

`quizzes-1`

What two keywords do we need to create an array?

`Ans:` Array and new

`quizzes-2`
Accessing an Array:

you refer to an array element by referring to the `index number` written in `square brackets.`
This statement accesses the value of the first element in `courses` and change the value of the second element

```js
var courses = new Array("HTML", "CSS", "JS");
var course = courses[0];
coursee[0] = "C++";
```

var arr=new Array(3,6,8);
document.write(arr[1]);

**What is the result of trying to reference an array member which does not exist?**

`Ans: undifine`
