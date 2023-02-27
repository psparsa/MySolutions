// Problem: A. Hulk
// Contest: Codeforces - Codeforces Round #366 (Div. 2)
// URL: https://codeforces.com/problemset/problem/705/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

let x = "";

rl.on("line", (_n) => {
  const n = parseInt(_n);
  if (n === 1) x += " I hate it ";
  else if (n > 1) x += " I hate that ";
  for (let i = 2; i < n; i++) {
    if (i % 2 == 1 && i != n) x += " I hate that ";
    else if (i % 2 == 0 && i != n) x += " I love that ";
  }

  if (n % 2 == 0 && n > 1) x += " I love it ";
  else if (n > 1) x += " I hate it ";

  console.log(x.trim());
});
