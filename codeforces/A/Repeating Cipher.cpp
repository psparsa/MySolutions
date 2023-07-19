// Problem: A. Repeating Cipher
// Contest: Codeforces - Codeforces Round 529 (Div. 3)
// URL: https://codeforces.com/contest/1095/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n;
  string s;
  cin >> n >> s;

  string ans = "";

  int x = 0;
  for (int i = 0; i < s.size(); i += x) {
    ++x;
    ans += s[i];
  }

  cout << ans;
}