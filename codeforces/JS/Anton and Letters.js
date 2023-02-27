// Problem: A. Anton and Letters
// Contest: Codeforces - Codeforces Round #253 (Div. 2)
// URL: https://codeforces.com/problemset/problem/443/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.on("line", (line) => {
  let list = [];
  line.split("").forEach((char) => {
    if (/^[a-zA-Z()]$/.test(char)) {
      list.push(char);
    }
  });
  let uniqList = [...new Set(list)];

  console.log(uniqList.length);
});
