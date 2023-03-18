// Problem: Reverse Minesweeper
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/reverse-minesweeper

const w = parseInt(readline());
const h = parseInt(readline());

const arr = [...Array(h)].map(() => readline().split(""));

const getAnswer = (inputArr) => {
  const cpyArr = JSON.parse(JSON.stringify(inputArr));
  const ix = (val) => val === "x";

  for (let x = 0; x < cpyArr.length; x++) {
    const prevRow = cpyArr[x - 1];
    const currentRow = cpyArr[x];
    const nextRow = cpyArr[x + 1];

    const tmp = currentRow.map((cell) => (cell === "." ? 0 : "x"));

    for (let y = 0; y < currentRow.length; y++) {
      const inc = () => {
        tmp[y] += 1;
      };

      if (ix(currentRow[y])) continue;

      if (prevRow) {
        if (ix(prevRow[y - 1])) inc();
        if (ix(prevRow[y])) inc();
        if (ix(prevRow[y + 1])) inc();
      }

      if (ix(currentRow[y - 1])) inc();
      if (ix(currentRow[y + 1])) inc();

      if (nextRow) {
        if (nextRow[y - 1] === "x") inc();
        if (nextRow[y] === "x") inc();
        if (nextRow[y + 1] === "x") inc();
      }
    }

    cpyArr[x] = tmp;
  }

  return cpyArr;
};

const printAnswer = (answer) => {
  const tmp = answer.map((row) =>
    row.map((cell) => (cell === 0 || cell === "x" ? "." : cell)).join("")
  );
  tmp.forEach((rowStr) => console.log(rowStr));
};

printAnswer(getAnswer(arr));
