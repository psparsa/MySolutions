const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

const log = console.log;
const lines = [];
rl.on("line", (line) => lines.push(line));

const f = (n) => (n === 1 ? n : n * f(n - 1));

rl.on("close", () => {
  for (let x = 1; x < lines.length; x++) {
    const n = parseInt(lines[x]);
    if ((f(n - 1) + f(n - 2)) % n === 0) log(n - 1);
    else log(-1);
  }
});

// This Code Doesn't Works!
