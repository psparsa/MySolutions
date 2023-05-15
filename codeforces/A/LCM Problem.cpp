// Problem: A. LCM Problem
// Contest: Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1389/A
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
  int t;
  cin >> t;
  while (t--) {
    int l, r;
    cin >> l >> r;
    if (2 * l > r)
      cout << "-1 -1";
    else
      cout << l << ' ' << 2 * l;

    cout << '\n';
  }
  return 0;
}