// Problem: A. Puzzle Pieces
// Contest: Codeforces - Codeforces Round 639 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1345/A
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
    int n, m;
    cin >> n >> m;
    cout << ((n > 2 && m > 1) || (m > 2 && n > 1) ? "NO" : "YES") << '\n';
  }
  return 0;
}