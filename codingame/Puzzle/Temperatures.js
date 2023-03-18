// Problem: Temperatures
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/temperatures

// the number of temperatures to analyse
const n = parseInt(readline());

const inputs = readline().split(" ");

// temperatures expressed as an integer ranging from -273 to 5526
const temperatures = [...Array(n)].map((_, index) => parseInt(inputs[index]));

const getNonDuplicatValueArr = (arr) => {
  const cpyArr = arr.slice();
  const arrLength = arr.length;
  const abs = Math.abs;

  for (let x = 0; x < arrLength; x++)
    for (let y = 0; y < arrLength; y++)
      if (abs(cpyArr[y]) === abs(cpyArr[x]) && cpyArr[y] < cpyArr[x])
        cpyArr.splice(y, 1);

  return cpyArr;
};

const tmpDataset = getNonDuplicatValueArr(temperatures);
const result =
  tmpDataset.length > 0
    ? tmpDataset.reduce((prevVal, currentVal) => {
        const prevABS = Math.abs(prevVal);
        const currentABS = Math.abs(currentVal);

        return prevABS < currentABS ? prevVal : currentVal;
      })
    : 0;

console.log(result);
