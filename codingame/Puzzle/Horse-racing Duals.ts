// Problem: Horse-racing Duals
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/horse-racing-duals

const N: number = parseInt(readline());

const arr: number[] = [];

for (let i = 0; i < N; i++) {
  const pi: number = parseInt(readline());
  arr.push(pi);
}

arr.sort((a, b) => a - b);

let answer: number = Infinity;
for (let x = 0; x < N; x++) {
  const current = arr[x];
  const next = arr[x + 1];

  if (current > next) {
    if (current - next < answer) answer = current - next;
  } else {
    if (next - current < answer) answer = next - current;
  }
}

console.log(answer);
