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
  if (parseInt(lines[0]) < 26) log("NO");
  else {
    const set = new Set(lines[1].toLowerCase().split(""));
    log(set.size >= 26 ? "YES" : "NO");
  }
});
