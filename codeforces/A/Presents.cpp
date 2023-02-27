// Problem: A. Presents
// Contest: Codeforces - Codeforces Beta Round #97 (Div. 2)
// URL: https://codeforces.com/problemset/problem/136/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int list[100];
  for (int i = 0; i < n; ++i) cin >> list[i];

  // list = 2, 3, 4, 1
  // indx = 0, 1, 2, 3
  for (int i = 1; i <= n; ++i)

    for (int x = 0; x < n; ++x)

      if (list[x] == i) {
        cout << x + 1 << ' ';
        break;
      }

  return 0;
}