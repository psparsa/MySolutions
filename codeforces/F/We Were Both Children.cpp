// Problem: F. We Were Both Children
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int tmp;
    vector<int> a(n + 1);
    int c = 0;
    for (int i = 0; i < n; ++i) {
      cin >> tmp;
      if (tmp <= n) {
        c = max(c, tmp);
        ++a[tmp];
      }
    }

    vector<long long> pos(n + 1);
    for (int i = 1; i <= c; ++i) {
      for (int j = i; j <= n; j += i) {
        pos[j] += a[i];
      }
    }

    auto ans = *max_element(pos.begin(), pos.end());

    cout << ans;
    nl;
  }
  return 0;
}