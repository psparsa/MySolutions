// Problem: A. Pretty Permutations
// Contest: Codeforces - Codeforces Round 728 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1541/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    if (n % 2) {
      cout << 3 << ' ' << 1 << ' ' << 2 << ' ';
      for (int i = 4; i <= n; ++i)
        cout << (i % 2 ? i - 1 : i + 1) << ' ';
      nl;
    } else {
      for (int i = 1; i <= n; ++i) {
        cout << (i % 2 ? i + 1 : i - 1) << ' ';
      }
      nl;
    }
  }
  return 0;
}