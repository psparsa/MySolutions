// Problem: A. Word Capitalization
// Contest: Codeforces - Codeforces Round 172 (Div. 2)
// URL: https://codeforces.com/problemset/problem/281/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

const input = readline();

const res = `${String(input[0]).toUpperCase()}${input.slice(1, input.length)}`;

print(res);
