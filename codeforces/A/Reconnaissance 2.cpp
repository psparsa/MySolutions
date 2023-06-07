// Problem: A. Reconnaissance 2
// Contest: Codeforces - Codeforces Beta Round 34 (Div. 2)
// URL: https://codeforces.com/problemset/problem/34/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <array>
#include <bitset>
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
  int a[100];
  for (int i = 1; i <= n; ++i)
    cin >> a[i];

  int ans[] = { n, 1 };

  int t1 = abs(a[1] - a[n]);

  for (int i = 1; i <= n; ++i) {
    int t2 = abs(a[i] - a[i + 1]);
    // cout << i << '\n';
    if (t2 < t1) {
      t1 = t2;
      ans[0] = i;
      ans[1] = i + 1;
    }
  }

  cout << ans[0] << ' ' << ans[1] << '\n';

  return 0;
}