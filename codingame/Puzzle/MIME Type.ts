// Problem: MIME Type
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/mime-type

const N: number = parseInt(readline()); // Number of elements which make up the association table.
const Q: number = parseInt(readline()); // Number Q of file names to be analyzed.

const mime = {};

for (let i = 0; i < N; i++) {
  var inputs: string[] = readline().split(" ");

  const EXT: string = inputs[0].toLocaleLowerCase(); // file extension
  const MT: string = inputs[1]; // MIME type.

  mime[EXT] = MT; // add it to mime object!
}

for (let i = 0; i < Q; i++) {
  const FNAME: string = readline(); // One file name per line.
  const FileEXT = FNAME.split(".").slice(-1).toString().toLocaleLowerCase();

  const isValid = FNAME.split(".").length >= 2;
  if (mime[FileEXT.toLocaleLowerCase()] && isValid) {
    console.log(mime[FileEXT]);
  } else {
    console.log("UNKNOWN");
  }
}
