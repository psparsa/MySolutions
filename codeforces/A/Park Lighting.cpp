// Problem: A. Park Lighting
// Contest: Codeforces - Codeforces Round 645 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1358/A
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
    int n, m;
    cin >> n >> m;
    int ans = ((n * m) + 1) / 2;
    cout << ans << '\n';
  }

  return 0;
}