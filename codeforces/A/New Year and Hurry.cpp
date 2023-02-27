// Problem: A. New Year and Hurry
// Contest: Codeforces - Good Bye 2016
// URL: https://codeforces.com/problemset/problem/750/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int totalMins = (4 * 60) - k;

  int t = 0, i;
  for (i = 0; i < n; ++i) {
    t += (i + 1) * 5;

    if (t > totalMins) break;
  }

  cout << i;

  return 0;
}

// 1, 2,  3,  4,  5,  6,   7,   8,   9,   10
// 5, 10, 15, 20, 25, 30,  35,  40,  45,  50
// 5, 15, 30, 50, 75, 105, 140, 180, 225, 275