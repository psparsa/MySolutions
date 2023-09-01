// Problem: A. Magic Numbers
// Contest: Codeforces - Codeforces Round 189 (Div. 2)
// URL: https://codeforces.com/problemset/problem/320/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  string n;
  cin >> n;

  bool ans = n[0] != '4';
  if (n.find("444") != n.npos)
    ans = false;

  for (int i = 0; i < n.length() && ans; ++i)
    if (n[i] != '1' && n[i] != '4')
      ans = false;

  cout << (ans ? "YES" : "NO");
  nl;

  return 0;
}