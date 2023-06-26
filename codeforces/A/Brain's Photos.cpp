// Problem: A. Brain's Photos
// Contest: Codeforces - Codeforces Round 368 (Div. 2)
// URL: https://codeforces.com/contest/707/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n, m;
  cin >> n >> m;

  char x;
  bool ans(true);

  for (int i = 0; i < n * m; ++i) {
    cin >> x;
    if (x != 'B' && x != 'W' && x != 'G') {
      ans = false;
      break;
    }
  }

  cout << (ans ? "#Black&White" : "#Color") << '\n';
  return 0;
}