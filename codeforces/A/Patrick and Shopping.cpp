// Problem: A. Patrick and Shopping
// Contest: Codeforces - Codeforces Round 332 (Div. 2)
// URL: https://codeforces.com/problemset/problem/599/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int d1, d2, d3;
  cin >> d1 >> d2 >> d3;

  int a = min(d1, d2);
  int b = max(d1, d2);

  int t1 = a + min(a + b, d3);
  int t2 = min(b, d3 + a);

  int ans = t1 + t2;

  cout << ans << '\n';
  return 0;
}