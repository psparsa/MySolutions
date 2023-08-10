// Problem: A. SSeeeeiinngg DDoouubbllee
// Contest: Codeforces - Codeforces Round 836 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1758/A
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
    string str, tmp;
    cin >> str;
    tmp = str;
    reverse(tmp.begin(), tmp.end());
    cout << tmp << str;
    nl;
  }
  return 0;
}