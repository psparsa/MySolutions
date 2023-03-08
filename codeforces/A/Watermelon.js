// Problem: A. Watermelon
// Contest: Codeforces - Codeforces Beta Round 4 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/4/A
// Memory Limit: 64 MB
// Time Limit: 1000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.on("line", (line) => {
  const w = parseInt(line);
  const answer = w % 2 === 0 && w > 2 ? "YES" : "NO";
  console.log(answer);
});
