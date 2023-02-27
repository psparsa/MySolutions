// Problem: A. String Task
// Contest: Codeforces - Codeforces Beta Round #89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

const isVowel = (c) => {
  switch (c.toLowerCase()) {
    case "a":
    case "o":
    case "y":
    case "e":
    case "u":
    case "i":
      return true;
    default:
      return false;
  }
};

rl.on("line", (line) => {
  const chars = line.split("");
  const output = chars
    .map((c) => {
      if (isVowel(c)) return "";
      return "." + c.toLowerCase();
    })
    .join("");

  console.log(output);
});
