// Problem: B. Gifts Fixing
// Contest: Codeforces - Codeforces Round 661 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1399/B
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
    int n;
    cin >> n;
    long long ans(0);

    int candies[50];
    int oranges[50];

    int c(numeric_limits<int>::max());
    int o(numeric_limits<int>::max());

    for (int i = 0; i < n; ++i) {
      cin >> candies[i];
      c = min(c, candies[i]);
    }

    for (int i = 0; i < n; ++i) {
      cin >> oranges[i];
      o = min(o, oranges[i]);
    }

    for (int i = 0; i < n; ++i) {
      int cDiff = candies[i] - c;
      int oDiff = oranges[i] - o;
      ans += min(cDiff, oDiff);
      ans += max(cDiff, oDiff) - min(cDiff, oDiff);
    }

    cout << ans << '\n';
  }
  return 0;
}