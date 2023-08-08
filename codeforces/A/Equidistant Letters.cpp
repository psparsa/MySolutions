// Problem: A. Equidistant Letters
// Contest: Codeforces - Educational Codeforces Round 121 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1626/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int t;
  cin >> t;

  while (t--) {
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    cout << str;
    nl;
  }

  return 0;
}