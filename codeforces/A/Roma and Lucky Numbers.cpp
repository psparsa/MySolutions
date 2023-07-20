// Problem: A. Roma and Lucky Numbers
// Contest: Codeforces - Codeforces Round 160 (Div. 2)
// URL: https://codeforces.com/problemset/problem/262/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n, k, ans(0);
  cin >> n >> k;
  while (n--) {
    int tmp(0);
    string s;
    cin >> s;

    for (char c : s)
      if (c == '4' || c == '7')
        ++tmp;

    if (tmp <= k)
      ++ans;
  }

  cout << ans;
  return 0;
}