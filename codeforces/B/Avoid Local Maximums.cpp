// Problem: B. Avoid Local Maximums
// Contest: Codeforces - Codeforces Round 772 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1635/B
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
    vector<int> vec(n);

    for (int i = 0; i < n; ++i)
      cin >> vec[i];

    int ans(0);

    // bool done = false;
    if (n > 2)
      for (int i = 1; i < n - 1; ++i) {
        if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) {
          ++ans;
          vec[i + 1] = vec[i];
          if (i + 2 < n)
            vec[i + 1] = max(vec[i + 1], vec[i + 2]);

          // done = false;
        }
      }

    cout << ans << '\n';
    for (int x : vec)
      cout << x << ' ';
    cout << '\n';
  }
}