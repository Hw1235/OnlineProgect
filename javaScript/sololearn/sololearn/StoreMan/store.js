var increase = 100;
var prices = [98.99, 15.2, 20, 1026];
for (let i = 0; i < prices.length; i++) {
  prices[i] = prices[i] + increase;
}

console.log(prices);
