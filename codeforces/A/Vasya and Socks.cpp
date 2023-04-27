// Problem: A. Vasya and Socks
// Contest: Codeforces - Codeforces Round 262 (Div. 2)
// URL: https://codeforces.com/problemset/problem/460/A
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
  int n, m;
  cin >> n >> m;

  int ans(0);
  int day(0);

  while (n > 0) {
    --n;
    ++ans;
    ++day;

    if (day % m == 0)
      ++n;
  }

  cout << ans << '\n';

  return 0;
}