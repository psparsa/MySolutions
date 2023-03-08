// Problem: A. Theatre Square
// Contest: Codeforces - Codeforces Beta Round 1
// URL: https://codeforces.com/problemset/problem/1/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.on("line", (line) => {
  const [n, m, a] = line.split(" ").map((int) => parseInt(int));
  const answer = Math.ceil(n / a) * Math.ceil(m / a);
  console.log(answer);
});
