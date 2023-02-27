// Problem: A. Gravity Flip
// Contest: Codeforces - Codeforces Round #238 (Div. 2)
// URL: https://codeforces.com/problemset/problem/405/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int l[n] = {0};

  for (int i = 0; i < n; ++i) cin >> l[i];

  sort(l, l + n);

  for (int x : l) cout << x << " ";

  return 0;
}