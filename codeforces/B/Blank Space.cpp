// Problem: B. Blank Space
// Contest: Codeforces - Codeforces Round 871 (Div. 4)
// URL: https://codeforces.com/contest/1829/problem/B
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
    int n;
    cin >> n;
    int x;
    int ans(0);
    bool flag(false);
    int tmp(0);
    for (int i = 0; i < n; ++i) {
      cin >> x;
      if (x == 0) {
        if (flag)
          ++tmp;
        else {
          flag = true;
          tmp = 1;
        }
      } else {
        flag = false;
      }

      ans = max(ans, tmp);
    }

    cout << ans << '\n';
  }
}