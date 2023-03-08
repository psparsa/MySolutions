// Problem: A. Boy or Girl
// Contest: Codeforces - Codeforces Round 146 (Div. 2)
// URL: https://codeforces.com/problemset/problem/236/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

const input = readline();

const list = Array.from(new Set(input.split("")));

if (list.length % 2 === 0) print("CHAT WITH HER!");
else print("IGNORE HIM!");
