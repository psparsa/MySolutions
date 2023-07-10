// Problem: A. Coins
// Contest: Codeforces - Codeforces Round 523 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1061/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n, s;
  cin >> n >> s;
  int ans(0);
  for (int i = n; i > 0; --i) {
    ans += s / i;
    s %= i;
  }
  cout << ans << endl;
  return 0;
}