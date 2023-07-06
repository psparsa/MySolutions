// Problem: A. Subtract or Divide
// Contest: Codeforces - Codeforces Round 685 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1451/A
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

    int ans(0);
    if (n > 1) {
      if (n % 2 == 0) {
        ans = n == 2 ? 1 : 2;
      } else {
        ans = n == 3 ? 2 : 3;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}