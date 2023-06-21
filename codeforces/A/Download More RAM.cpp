// Problem: A. Download More RAM
// Contest: Codeforces - Codeforces Round 767 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1629/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;

    vector<pair<int, int>> vec(n);

    for (auto& p : vec)
      cin >> p.first;
    for (auto& p : vec)
      cin >> p.second;

    sort(vec.begin(), vec.end());

    int ans(k);
    for (auto& p : vec) {
      if (ans >= p.first)
        ans += p.second;
    }

    cout << ans << '\n';
  }

  return 0;
}