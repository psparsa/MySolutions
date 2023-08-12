// Problem: A. Matching
// Contest: Codeforces - Educational Codeforces Round 147 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1821/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int ans(s[0] == '?' ? 9 : s[0] == '0' ? 0 : 1);
    if (ans == 0)
      goto printAns;
    for (int i = 1; i < s.size(); ++i)
      ans *= s[i] == '?' ? 10 : 1;
  printAns:
    cout << ans << '\n';
  }
  return 0;
}
