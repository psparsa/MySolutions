// Problem: A. C+=
// Contest: Codeforces - Codeforces Global Round 8
// URL: https://codeforces.com/problemset/problem/1368/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int a, b, n;
    cin >> a >> b >> n;

    int total = 0, ans = 0;
    while (total <= n) {
      ++ans;

      if (a < b)
        a += b;
      else
        b += a;

      total = max(a, b);
    }

    cout << ans;
    nl;
  }
  return 0;
}