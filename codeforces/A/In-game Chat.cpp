// Problem: A. In-game Chat
// Contest: Codeforces - Technocup 2021 - Elimination Round 3
// URL: https://codeforces.com/contest/1411/problem/A
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = s.size() - 1; i > -1; --i) {
      if (s[i] != ')')
        break;
      ++ans;
    }

    cout << (ans > (n - ans) ? "Yes" : "No") << '\n';
  }
  return 0;
}