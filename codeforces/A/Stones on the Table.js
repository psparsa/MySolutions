// Problem: A. Stones on the Table
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

const lines = [];
rl.on("line", (line) => lines.push(line));

rl.on("close", () => {
  const s = lines[1];

  let x = 0;
  for (let i = 0; i < s.length - 1; i++) {
    if (s[i] === s[i + 1]) {
      ++x;
    }
  }

  console.log(x);
});
