// Problem: B. Buttons
// Contest: Codeforces - Codeforces Round 164 (Div. 2)
// URL: https://codeforces.com/problemset/problem/268/B
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
  int n;
  cin >> n;

  int ans = n;

  for (int i = 2; i <= n; ++i) {
    int tmp = (i * (n - i)) + 1;
    // cout << "Log: " << (tmp) << '\n';
    ans += tmp;
  }

  cout << ans << '\n';
  return 0;
}