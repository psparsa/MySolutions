// Problem: C.Prepend and Append
// Contest: Codeforces - Codeforces Round 849(Div. 4)
// URL: https://codeforces.com/problemset/problem/1791/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
    terminal: false,
});

const lines = [];
rl.on("line", (line) => lines.push(line));

rl.on("close", () => {
    for (let i = 2; i < lines.length; i += 2) {
        const str = lines[i];

        let pointer1 = 0, pointer2 = str.length - 1;
        let reduceFrom = 0;

        while (pointer1 < pointer2) {
            if (str[pointer1] !== str[pointer2]) {
                reduceFrom++;
            } else {
                break;
            }

            ++pointer1;
            --pointer2;
        }

        console.log(str.length - (reduceFrom * 2))

    }
});

