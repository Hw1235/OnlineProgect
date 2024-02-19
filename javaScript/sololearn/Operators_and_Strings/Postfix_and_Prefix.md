**_Postfix and Prefix_**

**The ++ or -- can be applied both before and after the variable. This is where it gets a bit tricky. Let's figure this out!**

The postfix form returns the original value of the variable, and only then increments/decrements it.

```js
let x = 5;
console.log(x++);
console.log(x);
```
