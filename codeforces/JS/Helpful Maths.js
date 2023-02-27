const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.on("line", (exp) => {
  const x = exp.split("+");
  const y = x.sort((a, b) => a - b);
  console.log(y.join("+"));
});
