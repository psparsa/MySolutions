// Problem: A. Way Too Long Words
// Contest: Codeforces - Codeforces Beta Round 65 (Div. 2)
// URL: https://codeforces.com/problemset/problem/71/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

const solution = (word) => {
  if (!isNaN(parseInt(word))) return;
  else if (word.length > 10)
    console.log(word[0] + String(word.length - 2) + word[word.length - 1]);
  else console.log(word);
};

rl.on("line", solution);
