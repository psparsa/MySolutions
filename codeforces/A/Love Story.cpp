// Problem: A. Love Story
// Contest: Codeforces - Codeforces Round 871 (Div. 4)
// URL: https://codeforces.com/contest/1829/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  string cf = "codeforces";
  while (t--) {
    string s;
    cin >> s;
    int ans(0);
    for (int i = 0; i < 10; ++i)
      if (s[i] != cf[i])
        ++ans;

    cout << ans << '\n';
  }
}