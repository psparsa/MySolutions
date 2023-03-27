// Problem: A. Lucky?
// Contest: Codeforces - Codeforces Round 790 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1676/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  string s;
  while (t--) {
    cin >> s;
    cout << (s[0] + s[1] + s[2] == s[3] + s[4] + s[5] ? "YES" : "NO") << endl;
  }
  return 0;
}