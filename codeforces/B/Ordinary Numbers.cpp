// Problem: B. Ordinary Numbers
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    long long ans(0), x;

    for (int i = 1; i <= 9; ++i) {
      x = i;
      while (x <= n) {
        ++ans;
        x = x * 10 + i;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}