// Problem: B. Taxi
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/B
// Memory Limit: 256 MB
// Time Limit: 3000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

const solution = (arr) => {
  let arrCpy = arr.slice();
  const l = arr.length;

  for (let i = l - 1; i >= 1; --i) {
    let tmp = arrCpy[i] + arrCpy[0];

    if (tmp <= 4) {
      arrCpy[i] += arrCpy[0];
      arrCpy.shift();
    }
  }

  return arrCpy.length;
};

const log = console.log;
const lines = [];
rl.on("line", (line) => lines.push(line));

rl.on("close", () => {
  const list = lines[1].split(" ").sort().map(Number);
  console.log(solution(list));
});
