// Problem: A. Translation
// Contest: Codeforces - Codeforces Beta Round #40 (Div. 2)
// URL: https://codeforces.com/problemset/problem/41/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

const log = console.log;
const lines = [];
rl.on("line", (line) => lines.push(line));

rl.on("close", () => {
  const [s, t] = lines;

  if (s === t.split("").reverse().join("")) log("YES");
  else log("NO");
});
