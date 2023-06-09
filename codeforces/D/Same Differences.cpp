// Problem: D. Same Differences
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t, n, ai;
  cin >> t;

  while (t--) {
    cin >> n;

    unordered_map<int, int> ump;
    long long ans(0);

    for (int i = 1; i <= n; ++i) {
      cin >> ai;

      long long diff = ai - i;
      ans += ump[diff];
      ump[diff]++;
    }

    cout << ans << '\n';
  }

  return 0;
}
