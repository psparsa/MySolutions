// Problem: A. Doors and Keys
// Contest: Codeforces - Educational Codeforces Round 123 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1644/A
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
    string str;
    cin >> str;
    bool ans(true);
    set<char> s;
    for (int i = 0; i < 6; ++i) {
      char x = str[i];
      if (islower(x))
        s.insert(toupper(x));
      else {
        if (s.find(x) == s.end()) {
          ans = false;
          break;
        }
      }
    }
    cout << (ans ? "YES" : "NO") << '\n';
  }
  return 0;
}