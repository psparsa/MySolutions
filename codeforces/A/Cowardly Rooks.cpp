// Problem: A. Cowardly Rooks
// Contest: Codeforces - Educational Codeforces Round 138 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1749/A
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
    int n, m, x, y;
    cin >> n >> m;

    // useless :|
    for (int i = 0; i < m; ++i)
      cin >> x >> y;

    cout << (m < n ? "YES" : "NO") << '\n';
  }
}