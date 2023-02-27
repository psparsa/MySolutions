// Problem: A. Petya and Strings
// Contest: Codeforces - Codeforces Beta Round #85 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/112/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

/**
 * Notes:
 The strings consist of uppercase and lowercase Latin letters.
 Now Petya wants to compare those two strings lexicographically.
 The letters' case does not matter
 that is an uppercase letter is considered equivalent to the corresponding lowercase letter
*/

const log = console.log;
const lines = [];
rl.on("line", (line) => lines.push(line.toLowerCase()));

rl.on("close", () => {
  if (lines[0] === lines[1]) log(0);
  else if (lines[0] > lines[1]) log(1);
  else log(-1);
});
