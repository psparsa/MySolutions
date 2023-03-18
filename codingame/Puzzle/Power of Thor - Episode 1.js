// Problem: Power of Thor - Episode 1
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/power-of-thor-episode-1

const inputs = readline().split(" ");

const lightX = parseInt(inputs[0]); // the X position of the light of power
const lightY = parseInt(inputs[1]); // the Y position of the light of power

const initialTx = parseInt(inputs[2]); // Thor's starting X position
const initialTy = parseInt(inputs[3]); // Thor's starting Y position

const initialGetMove = ({ initialX, initialY }) => {
  let positionX = initialX;
  let positionY = initialY;
  return {
    getMove: ({ lightX, lightY }) => {
      // Target: NW NE SE SW
      if (positionX > lightX && positionY > lightY) {
        positionX--;
        positionY--;
        return "NW";
      } else if (positionX < lightX && positionY > lightY) {
        positionX++;
        positionY--;
        return "NE";
      } else if (positionX < lightX && positionY < lightY) {
        positionX++;
        positionY++;
        return "SE";
      } else if (positionX > lightX && positionY < lightY) {
        positionX--;
        positionY++;
        return "SW";
      }
      // Target: E W N S
      else if (positionX < lightX) {
        positionX++;
        return "E";
      } else if (positionX > lightX) {
        positionX--;
        return "W";
      } else if (positionY > lightY) {
        positionY--;
        return "N";
      } else if (positionY < lightY) {
        positionY++;
        return "S";
      }
    },
  };
};

const { getMove } = initialGetMove({
  initialX: initialTx,
  initialY: initialTy,
});
while (true) {
  const remainingTurns = parseInt(readline()); // The remaining amount of turns Thor can move. Do not remove this line.
  console.log(getMove({ lightX, lightY }));
}
