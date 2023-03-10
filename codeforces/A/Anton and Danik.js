// Problem: A. Anton and Danik
// Contest: Codeforces - Codeforces Round #379 (Div. 2)
// URL: https://codeforces.com/problemset/problem/734/A
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
  const [n, s] = lines;
  let anton = 0;
  let danik = 0;

  for (let x = 0; x < s.length; x++) {
    if (s[x] === "A") ++anton;
    else danik++;
  }

  if (anton === danik) log("Friendship");
  else log(anton > danik ? "Anton" : "Danik");
});
