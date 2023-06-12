// Problem: B. Anton and Digits
// Contest: Codeforces - Codeforces Round 379 (Div. 2)
// URL: https://codeforces.com/problemset/problem/734/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int k2, k3, k5, k6;
  cin >> k2 >> k3 >> k5 >> k6;

  int ans(0);
  bool x(true);

  while (x) {
    if (k2 > 0 && k5 > 0 && k6 > 0) {
      ans += 256;
      --k2;
      --k5;
      --k6;
    } else if (k3 > 0 && k2 > 0) {
      ans += 32;
      --k3;
      --k2;
    } else {
      x = false;
    }
  }

  cout << ans << '\n';

  return 0;
}