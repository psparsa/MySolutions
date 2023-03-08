// Problem: Don't Panic - Episode 1
// Mode: Puzzle
// URL: https://www.codingame.com/training/medium/don't-panic-episode-1

var inputs = readline().split(" ");
const nbFloors = parseInt(inputs[0]); // number of floors
const width = parseInt(inputs[1]); // width of the area
const nbRounds = parseInt(inputs[2]); // maximum number of rounds
const exitFloor = parseInt(inputs[3]); // floor on which the exit is found
const exitPos = parseInt(inputs[4]); // position of the exit on its floor
const nbTotalClones = parseInt(inputs[5]); // number of generated clones
const nbAdditionalElevators = parseInt(inputs[6]); // ignore (always zero)
const nbElevators = parseInt(inputs[7]); // number of elevators

const elev = {};

for (let i = 0; i < nbElevators; i++) {
  var inputs = readline().split(" ");
  const elevatorFloor = parseInt(inputs[0]); // floor on which this elevator is found
  elev[elevatorFloor] = [];
  const elevatorPos = parseInt(inputs[1]); // position of the elevator on its floor
  elev[elevatorFloor] = [...elev[elevatorFloor], elevatorPos];
}

function getDir(clonePos, destPos) {
  if (clonePos > destPos) return "LEFT";
  if (clonePos < destPos) return "RIGHT";
  return "NONE";
}

let x = 0;
// game loop
while (true) {
  var inputs = readline().split(" ");
  const cloneFloor = parseInt(inputs[0]); // floor of the leading clone
  const clonePos = parseInt(inputs[1]); // position of the leading clone on its floor
  const dir = inputs[2]; // direction of the leading clone: LEFT or RIGHT

  const floor = cloneFloor < 0 ? 0 : cloneFloor;
  const dest = elev[floor] ? elev[floor][0] : exitPos;

  console.error({ clonePos, dir, exitPos, floor, dest });
  console.error("elev:", elev[floor]);

  const tmp = getDir(clonePos, dest);
  if (tmp === dir) console.log("WAIT");
  else if (tmp === "NONE") console.log("WAIT");
  else console.log("BLOCK");
}
