// Problem: A. Subtraction Game
// Contest: Codeforces - Codeforces Round  884 (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1844/problem/A
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
    int a, b;
    cin >> a >> b;

    if (a > 1) {
      cout << 1 << '\n';
    } else {
      int n = a + b;
      cout << n << '\n';
    }
  }

  return 0;
}
