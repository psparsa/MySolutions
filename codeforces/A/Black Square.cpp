// Problem: A. Black Square
// Contest: Codeforces - Codeforces Round 247 (Div. 2)
// URL: https://codeforces.com/problemset/problem/431/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int
main()
{
  int a[4];
  for (int i = 0; i < 4; ++i)
    cin >> a[i];
  string s;
  cin >> s;

  int ans(0);

  for (size_t i = 0; i < s.size(); ++i)
    ans += a[s[i] - '1'];

  cout << ans << '\n';

  return 0;
}