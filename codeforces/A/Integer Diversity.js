// Problem: A. Integer Diversity
// Contest: Codeforces - Good Bye 2021: 2022 is NEAR
// URL: https://codeforces.com/problemset/problem/1616/A
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
  const t = lines[0];

  for (let i = 1; i < t * 2; i += 2) {
    let n = parseInt(lines[i]);
    const elems = lines[i + 1].split(" ");

    const set = new Set();
    for (let y = 0; y < n; ++y) {
      const element = parseInt(elems[y]);

      const negative = element > 0 ? -element : Math.abs(element);

      if (set.has(element)) set.add(negative);
      else set.add(element);
    }

    console.log(set.size);
  }
});
