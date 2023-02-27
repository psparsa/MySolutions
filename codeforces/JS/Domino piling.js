const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.on("line", (input) => {
  //1  <= M  <= N <= 16
  const [m, n] = input.split(" ");
  console.log(Math.floor((m * n) / 2));
});
