// Problem: A. Beautiful Matrix
// Contest: Codeforces - Codeforces Round #161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

const matrix = [];
rl.on("line", (line) => matrix.push(line.split(" ")));
rl.on("close", () => {
  let y_axis = 0;
  let x_axis = 0;
  for (let y = 0; y < 5; y++) {
    let d = false;
    for (let x = 0; x < 5; x++) {
      if (+matrix[y][x] === 1) {
        y_axis = y + 1;
        x_axis = x + 1;
        d = true;
        break;
      }
    }
    if (d) break;
  }
  console.log(Math.abs(y_axis - 3) + Math.abs(x_axis - 3));
});
