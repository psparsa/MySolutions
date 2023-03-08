// Problem: A. Puzzles
// Contest: Codeforces - Codeforces Round 196 (Div. 2)
// URL: https://codeforces.com/problemset/problem/337/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int p[m];

  for (int i = 0; i < m; ++i) cin >> p[i];
  sort(p, p + m);

  // cout << "sorted arr:" << endl;
  // for (int x : p) cout << x << ", ";
  // cout << endl << endl;

  // (4 ≤ fi ≤ 1000)
  int diff = 1000, tmp;
  for (int i = 0; i <= m - n; ++i) {
    tmp = abs(p[i] - p[i + n - 1]);
    if (tmp < diff) diff = tmp;

    // cout << "i: " << i << " i+n: " << i + n - 1 << endl;
  }

  cout << diff;
  return 0;
}