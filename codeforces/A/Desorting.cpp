// Problem: A. Desorting
// Contest: Codeforces - Codeforces Round 887 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1853/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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

    bool is_sorted = true;

    vector<int> vec(n);
    cin >> vec[0];

    for (int i = 1; i < n; ++i) {
      cin >> vec[i];
      if (vec[i] < vec[i - 1])
        is_sorted = false;
    }

    int ans = 0;

    if (is_sorted) {
      ans = INT_MAX;
      int tmp;

      for (int i = 0; i < n - 1; ++i) {
        tmp = abs(vec[i] - vec[i + 1]);
        ans = min(tmp, ans);
      }

      ans = (ans + (ans % 2 ? 1 : 2)) / 2;
    }

    cout << ans;
    nl;
  }
  return 0;
}