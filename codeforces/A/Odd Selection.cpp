// Problem: A. Odd Selection
// Contest: Codeforces - Codeforces Round 646 (Div. 2)
// URL: https://codeforces.com/contest/1363/problem/A
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
    int n, x;
    cin >> n >> x;

    int e(0), o(0);
    int tmp;
    for (int i(0); i < n; ++i) {
      cin >> tmp;
      if (tmp % 2 == 0)
        ++e;
      else
        ++o;
    }
    tmp = min(x + (x % 2), o + (o % 2)) - 1;
    bool ans = tmp > 0 && x - tmp <= e;
    cout << (ans ? "Yes" : "No") << '\n';
  }
  return 0;
}
