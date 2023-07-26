// Problem: A. Summer Camp
// Contest: Codeforces - Codeforces Round 352 (Div. 2)
// URL: https://codeforces.com/contest/672/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n, i, l = 0;
  cin >> n;
  for (i = 1; l < n; ++i)
    l += to_string(i).length();
  --i;
  int pos = n - (l - to_string(i).length()) - 1;
  cout << to_string(i).substr(pos, 1) << '\n';
  return 0;
}