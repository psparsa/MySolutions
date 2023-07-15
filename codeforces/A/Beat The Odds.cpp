// Problem: A. Beat The Odds
// Contest: Codeforces - CodeCraft-22 and Codeforces Round 795 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1691/A
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
    int n, tmp, a(0), b(0);
    cin >> n;
    while (n--) {
      cin >> tmp;
      if (tmp % 2 == 0)
        ++a;
      else
        ++b;
    }

    cout << min(a, b) << '\n';
  }
}