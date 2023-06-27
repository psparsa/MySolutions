// Problem: B. Honest Coach
// Contest: Codeforces - Codeforces Round 644 (Div. 3)
// URL: https://codeforces.com/contest/1360/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int s[50];
    for (size_t i = 0; i < n; ++i)
      cin >> s[i];
    sort(s, s + n);
    int ans(1001);
    for (size_t i = 0; i < n - 1; i++)
      ans = min(ans, abs(s[i] - s[i + 1]));
    cout << ans << '\n';
  }
  return 0;
}
