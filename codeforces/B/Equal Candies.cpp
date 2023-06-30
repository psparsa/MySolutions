// Problem: B. Equal Candies
// Contest: Codeforces - Codeforces Round 790 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1676/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int x, a(10000000);
    long long total = 0;
    for (int i = 0; i < n; ++i) {
      cin >> x;
      total += x;
      a = min(a, x);
    }
    cout << (total - (a * n)) << '\n';
  }
  return 0;
}