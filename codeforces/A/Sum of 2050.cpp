// Problem: A. Sum of 2050
// Contest: Codeforces - Contest 2050 and Codeforces Round 718 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1517/A
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
    long long n;
    cin >> n;

    int ans(0);

    if (n % 2050 == 0) {
      n = n / 2050;
      while (n != 0) {
        ans += n % 10;
        n /= 10;
      }
      cout << ans;
    } else
      cout << -1;

    cout << '\n';
  }
  return 0;
}