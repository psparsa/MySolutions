// Problem: A. Bit++
// Contest: Codeforces - Codeforces Round #173 (Div. 2)
// URL: https://codeforces.com/problemset/problem/282/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

const lines = [];
rl.on("line", (line) => lines.push(line));

rl.on("close", () => {
  let X = 0;
  // :)))))))))
  for (let x = 1; x < lines.length; x++) eval(lines[x]);
  console.log(X);
});
