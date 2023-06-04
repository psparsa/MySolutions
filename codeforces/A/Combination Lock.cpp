// Problem: A. Combination Lock
// Contest: Codeforces - Codeforces Round 301 (Div. 2)
// URL: https://codeforces.com/problemset/problem/540/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
  int n;
  cin >> n;
  string a, b;
  cin >> a >> b;

  int ans(0);
  for (int i = 0; i < n; ++i) {
    int x0 = +a[i], x1 = +b[i];
    int t0, t1;

    t0 = max(x0, x1) - min(x0, x1);

    t1 = (10 - max(x0, x1)) + min(x0, x1);

    ans += min(t0, t1);
  }

  cout << ans;

  return 0;
}