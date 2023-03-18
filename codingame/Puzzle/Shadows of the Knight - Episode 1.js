// Problem: Shadows of the Knight - Episode 1
// Mode: Puzzle
// URL:
// https://www.codingame.com/training/medium/shadows-of-the-knight-episode-1

const int = parseInt;

var inputs = readline().split(" ");
const w = int(inputs[0]); // width of the building.
const h = int(inputs[1]); // height of the building.
const n = int(readline()); // maximum number of turns before game over.

var inputs = readline().split(" ");
let x = int(inputs[0]);
let y = int(inputs[1]);

const l = {
  x: {
    start: 0,
    end: w,
  },
  y: {
    start: 0,
    end: h,
  },
};

const calculateLimitZone = (dir) => {
  if (dir === "D") l.y.start = y;
  if (dir === "U") l.y.end = y;
  if (dir === "R") l.x.start = x;
  if (dir === "L") l.x.end = x;
};

const handleDirection = (dir) => {
  if (dir.length === 1) calculateLimitZone(dir);
  else {
    calculateLimitZone(dir[0]);
    calculateLimitZone(dir[1]);
  }
};

const getMid = (a, b) => {
  const bigger = Math.max(a, b);
  const smaller = Math.min(a, b);

  return Math.floor((bigger - smaller) / 2 + smaller);
};

const handleMove = () => {
  x = getMid(l.x.end, l.x.start);
  y = getMid(l.y.end, l.y.start);
};

while (true) {
  // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
  const bombDir = readline();
  handleDirection(bombDir);

  handleMove();
  // X Y
  console.log(x, y);
}
