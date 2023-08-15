// Problem: B. 01 Game
// Contest: Codeforces - Educational Codeforces Round 90 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1373/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
    int n = s.size();
    int one(0), zero(0);
    for (char c : s)
      if (c == '1')
        ++one;
      else
        ++zero;

    int pairs = min(one, zero);

    if (pairs == 0)
      cout << "NET";
    else if (pairs % 2)
      cout << "DA";
    else
      cout << "NET";

    nl;
  }

  return 0;
}