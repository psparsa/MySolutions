// Problem: A. Kids Seating
// Contest: Codeforces - Codeforces Round 681 (Div. 2, based on VK Cup 2019-2020
// - Final) URL: https://codeforces.com/problemset/problem/1443/A Memory Limit:
// 256 MB Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    for (int i = 0, tmp = 4 * n - 2; i < n; ++i, tmp -= 2)
      cout << tmp << ' ';
    nl;
  }

  return 0;
}