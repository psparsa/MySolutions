// Problem: A. Square String?
// Contest: Codeforces - Codeforces Round 761 (Div. 3)
// URL: https://codeforces.com/contest/1618/problem/A
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
  for (let i = 1; i < lines.length; i++) {
    const str = lines[i].split("");
    if (str.length % 2 === 0) {
      const a = str.splice(0, str.length / 2).join("");
      const b = str.join("");
      console.log(a === b ? "YES" : "NO");
    } else console.log("NO");
  }
});
