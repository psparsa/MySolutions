// Problem: C. Word on the Paper
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/C
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
    string ans = "";
    for (int i = 0; i < 8; ++i) {
      string row = "";
      cin >> row;

      for (int j = 0; j < 8; ++j) {
        if (row[j] != '.')
          ans += row[j];
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
