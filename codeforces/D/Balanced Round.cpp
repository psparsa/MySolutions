// Problem: D. Balanced Round
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/D
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
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
      cin >> vec[i];
    sort(vec.begin(), vec.end());

    int mx = 1;
    int tmp = 1;
    for (int i = 1; i < n; ++i) {
      if (abs(vec[i - 1] - vec[i]) <= k)
        ++tmp;
      else {
        mx = max(mx, tmp);
        tmp = 1;
      }
    }

    mx = max(mx, tmp);

    cout << (n - mx) << '\n';
  }
  return 0;
}