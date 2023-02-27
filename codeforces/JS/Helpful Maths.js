// Problem: A. Helpful Maths
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.on("line", (exp) => {
  const x = exp.split("+");
  const y = x.sort((a, b) => a - b);
  console.log(y.join("+"));
});
