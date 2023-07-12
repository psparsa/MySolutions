// Problem: A. Crazy Computer
// Contest: Codeforces - Codeforces Round 372 (Div. 2)
// URL: https://codeforces.com/contest/716/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n, c;
  cin >> n >> c;

  int prev;
  cin >> prev;

  if (n == 1) {
    cout << 1 << '\n';
    return 0;
  }

  int ans(1);
  int current;
  for (int i = 1; i < n; ++i) {
    cin >> current;
    if (current - prev > c) {
      ans = 1;
    } else {
      ++ans;
    }

    prev = current;
  }

  cout << ans << '\n';
  return 0;
}