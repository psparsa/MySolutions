// Problem: A. Image
// Contest: Codeforces - Educational Codeforces Round 134 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1721/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;

  string t1, t2, colors;
  while (t--) {
    cin >> t1;
    cin >> t2;
    colors = t1 + t2;

    set<char> _set;
    for (char c : colors)
      _set.insert(c);
    cout << (_set.size() - 1) << '\n';
  }
  return 0;
}