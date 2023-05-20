// Problem: A. Multiplication Table
// Contest: Codeforces - Codeforces Round 319 (Div. 2)
// URL: https://codeforces.com/problemset/problem/577/A
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
  int n, x, ans(0);
  cin >> n >> x;
  for (int i = 1; i <= n; ++i)
    ans += (x % i == 0 && x / i <= n);
  cout << ans << '\n';
  return 0;
}