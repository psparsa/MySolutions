// Problem: A. Boring Apartments
// Contest: Codeforces - Codeforces Round 677 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1433/A
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
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;

    int ans = 0;
    for (int i = 1; i <= 9; ++i) {
      int boring_home = 0; // 1,11,111,1111
      for (int y = 1, h = 1; y <= 1000; y *= 10, ++h) {
        ans += h;
        boring_home += i * y;
        if (boring_home == x)
          goto done;
      }
    }

  done:
    cout << ans << '\n';
  }
  return 0;
}