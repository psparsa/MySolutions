// Problem: A. Reverse and Concatenate
// Contest: Codeforces - Codeforces Round 770 (Div. 2)
// URL: https://codeforces.com/contest/1634/problem/A
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
    int t, k;
    cin >> t >> k;
    string s;
    cin >> s;
    string rev(s);
    reverse(rev.begin(), rev.end());
    int tmp(s == rev ? 1 : 2);
    cout << (k == 0 ? 1 : tmp) << '\n';
  }

  return 0;
}
