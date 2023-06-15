// Problem: A. Musical Puzzle
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1833/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t, n;
  string s;
  cin >> t;
  while (t--) {
    cin >> n >> s;
    set<string> _set;
    for (int i = 0; i < n - 1; ++i)
      _set.insert(s[i] + ""s + s[i + 1]);
    cout << _set.size() << '\n';
  }
  return 0;
}