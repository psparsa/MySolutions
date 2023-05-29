// Problem: B. File Name
// Contest: Codeforces - Codeforces Round 481 (Div. 3)
// URL: https://codeforces.com/problemset/problem/978/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
  let str = lines[1];
  const n = str.length;

  let ans = 0;
  for (let i = 0; i < n; ++i) {
    if (str[i] === "x" && str[i + 1] === "x" && str[i + 2] === "x") ans++;
  }
  log(ans);
});
