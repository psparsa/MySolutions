// Problem: A. Holiday Of Equality
// Contest: Codeforces - Codeforces Round #392 (Div. 2)
// URL: https://codeforces.com/problemset/problem/758/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n, b = 0, r = 0;
  cin >> n;
  int l[n];

  for (int i = 0; i < n; ++i) cin >> l[i];

  for (int x : l) b = b < x ? x : b;

  for (int x : l) r += b - x;

  cout << r;

  return 0;
}