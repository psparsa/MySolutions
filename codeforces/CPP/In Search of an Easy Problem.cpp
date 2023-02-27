// Problem: A. In Search of an Easy Problem
// Contest: Codeforces - Technocup 2019 - Elimination Round 1
// URL: https://codeforces.com/problemset/problem/1030/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool e = true;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x == 1) {
      e = false;
      break;
    }
  }

  cout << (e ? "EASY" : "HARD");
  return 0;
}