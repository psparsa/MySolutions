// Problem: Logic gates
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/logic-gates

const n = parseInt(readline()); // number of input signals.
const m = parseInt(readline()); // number of output signals.

const signalList = [...Array(n)].map(() => {
  const [inputName, inputSignal] = readline().split(" ");
  return {
    inputName,
    inputSignal,
  };
});

const convertSignalsToBinary = (signal) =>
  signal
    .split("")
    .map((pulse) => (pulse === "-" ? 1 : 0))
    .join("");
const convertBinaryToSignal = (binary) =>
  binary
    .split("")
    .map((x) => (x === "1" ? "-" : "_"))
    .join("");

const convertedSignals = signalList.map((signal) => ({
  ...signal,
  inputSignal: convertSignalsToBinary(signal.inputSignal),
}));

const gates = {
  AND: (a, b) => a & b,
  OR: (a, b) => a || b,
  XOR: (a, b) => a ^ b,
  NAND: (a, b) => Number(!(a && b)),
  NOR: (a, b) => Number(!a && !b),
  NXOR: (a, b) => Number(!(a ^ b)),
};

const logicDevice = (binarysignal1, binarysignal2, gateName) => {
  const s1 = binarysignal1.split("");
  const s2 = binarysignal2.split("");

  const tmp = s1.map((_, i) => gates[gateName](+s1[i], +s2[i])).join("");
  return convertBinaryToSignal(tmp);
};

for (let i = 0; i < m; i++) {
  const [outputName, type, inputName1, inputName2] = readline().split(" ");

  const signal1 = convertedSignals.find(
    (s) => s.inputName === inputName1
  ).inputSignal;
  const signal2 = convertedSignals.find(
    (s) => s.inputName === inputName2
  ).inputSignal;

  console.log(outputName, logicDevice(signal1, signal2, type));
}
