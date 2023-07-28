// Problem: A. String Building
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1671/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    bool ans = true;
    if (s.size() == 1)
      ans = false;

    else {
      for (int i = 0; i < s.size() && ans; ++i) {
        if (i == 0) {
          if (s[0] != s[1]) {
            ans = false;
          }
        } else {
          if (s[i] != s[i - 1]) {
            if (s[i] != s[i + 1])
              ans = false;
          }
        }
      }
    }
    cout << (ans ? "YES" : "NO");
    nl;
  }
  return 0;
}