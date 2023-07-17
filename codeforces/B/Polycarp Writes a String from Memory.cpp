// Problem: B. Polycarp Writes a String from Memory
// Contest: Codeforces - Codeforces Round 805 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1702/B
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
    string s;
    cin >> s;

    set<char> mem;

    int ans = 0, tmp = 0;

    for (int i = 0; i < s.size(); ++i) {
      bool wut = mem.find(s[i]) == mem.end();

      if (tmp == 3 && wut) {
        ++ans;
        tmp = 0;
        mem.clear();
      }

      if (wut) {
        mem.insert(s[i]);
        ++tmp;
      }
    }

    if (tmp != 0) {
      ++ans;
    }

    cout << ans << '\n';
  }
  return 0;
}