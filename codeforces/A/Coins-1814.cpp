// Problem: A. Coins
// Contest: Codeforces - Educational Codeforces Round 146 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1814/problem/A
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
    long long n, k;
    cin >> n >> k;

    bool ans = n % 2 == 0 || n - k >= 0 && (n - k) % 2 == 0;
    cout << (ans ? "YES" : "NO") << '\n';
  }
  return 0;
}
