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
  const players = lines[1].split(" ").map(Number);
  const k = players[lines[0].split(" ")[1] - 1];

  let output = 0;
  for (let x = 0; x < players.length; ++x) {
    if (players[x] >= k && players[x] > 0) ++output;
  }

  log(output);
});
