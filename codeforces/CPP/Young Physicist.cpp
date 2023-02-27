// Problem: A. Young Physicist
// Contest: Codeforces - Codeforces Beta Round #63 (Div. 2)
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = 0, b = 0, c = 0;

  for (int i = 0; i < n; ++i) {
    int x, y, z;
    cin >> x >> y >> z;
    a += x;
    b += y;
    c += z;
  }

  if (a == 0) {
    if (b == 0)
      if (c == 0) cout << "YES";
  } else
    cout << "NO";

  return 0;
}