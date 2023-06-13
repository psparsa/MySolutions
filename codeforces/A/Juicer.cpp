// Problem: A. Juicer
// Contest: Codeforces - AIM Tech Round 3 (Div. 2)
// URL: https://codeforces.com/problemset/problem/709/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n, b, d;
  cin >> n >> b >> d;

  int total(0), ans(0);
  int a;
  for (int i = 0; i < n; ++i) {
    cin >> a;
    if (a <= b) {
      // if (n == 2)
      // cout << a;
      total += a;
    }

    if (total > d) {
      ++ans;
      total = 0;
    }
  }

  cout << ans << '\n';

  return 0;
}