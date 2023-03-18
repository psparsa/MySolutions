// Problem: 7-segment scanner
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/7-segment-scanner

const a = readline().split("");
const b = readline().split("");
const c = readline().split("");
const length = a.length;

let arr = [];

for (x = 0; x < length; x = x + 3) {
  const start = x;
  const end = x + 3;
  arr.push([a.slice(start, end), b.slice(start, end), c.slice(start, end)]);
}

let j = arr
  .map((row) => row.map((val) => val.join("")))
  .map((vals) => vals.join(""));

const gimmeTheSolution = (key) => {
  const mapObj = new Map([
    [" _ | ||_|", 0],
    ["     |  |", 1],
    [" _  _||_ ", 2],
    [" _  _| _|", 3],
    ["   |_|  |", 4],
    [" _ |_  _|", 5],
    [" _ |_ |_|", 6],
    [" _   |  |", 7],
    [" _ |_||_|", 8],
    [" _ |_| _|", 9],
  ]);

  return mapObj.get(key);
};

console.log(j.map((a) => gimmeTheSolution(a)).join(""));
