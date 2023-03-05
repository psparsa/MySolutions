// Problem: A. Game With Sticks
// Contest: Codeforces - Codeforces Round 258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  cout << (min(n, m) % 2 != 0 ? "Akshat" : "Malvika");
  return 0;
}