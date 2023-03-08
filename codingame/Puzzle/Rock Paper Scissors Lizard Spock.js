// Problem: Rock Paper Scissors Lizard Spock
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/rock-paper-scissors-lizard-spock

const calc = (a, b) => {
  const res = {
    R: ["C", "L"], // Rock
    P: ["R", "S"], // Paper
    S: ["C", "R"], // Spock
    L: ["P", "S"], // Lizard
    C: ["P", "L"], // Scissors
  };

  if (a === b) return "=";

  const tmp = res[a].find((x) => x === b);

  return tmp ? ">" : "<";
};

const N = parseInt(readline());
const dataset = [...Array(N)].map(() => {
  const inputs = readline().split(" ");
  return {
    NUMPLAYER: parseInt(inputs[0]),
    SIGNPLAYER: inputs[1],
    Opponents: [],
  };
});

const answer = (d) => {
  const c = d.slice();

  if (c.length === 1) return [c[0].NUMPLAYER, c[0].Opponents.join(" ")];

  const tmp = [];

  const s = (obj, o) => ({ ...obj, Opponents: [...obj.Opponents, o] });

  for (let x = 0; x < c.length; x = x + 2) {
    if (calc(c[x].SIGNPLAYER, c[x + 1].SIGNPLAYER) === ">")
      tmp.push(s(c[x], c[x + 1].NUMPLAYER));
    else if (calc(c[x].SIGNPLAYER, c[x + 1].SIGNPLAYER) === "<")
      tmp.push(s(c[x + 1], c[x].NUMPLAYER));
    else if (c[x].NUMPLAYER < c[x + 1].NUMPLAYER)
      tmp.push(s(c[x], c[x + 1].NUMPLAYER));
    else tmp.push(s(c[x + 1], c[x].NUMPLAYER));
  }

  return answer(tmp);
};

const ans = answer(dataset);

console.log(ans[0]);
console.log(ans[1]);
