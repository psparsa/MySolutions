// Problem: A. Two Rabbits
// Contest: Codeforces - Codeforces Round 620 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1304/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if ((b - a) % (x + y) != 0)
      cout << -1 << '\n';
    else
      cout << (b - a) / (x + y) << endl;
  }
  return 0;
}
