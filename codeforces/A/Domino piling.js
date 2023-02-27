// Problem: A. Domino piling
// Contest: Codeforces - Codeforces Beta Round #47
// URL: https://codeforces.com/problemset/problem/50/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.on("line", (input) => {
  //1  <= M  <= N <= 16
  const [m, n] = input.split(" ");
  console.log(Math.floor((m * n) / 2));
});
