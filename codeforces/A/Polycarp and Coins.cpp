// Problem: A. Polycarp and Coins
// Contest: Codeforces - Codeforces Round 734 (Div. 3)
// URL: https://codeforces.com/contest/1551/problem/A
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
    int a, b;

    if (n % 3 == 0) {
      a = b = n / 3;
    } else if (n % 3 == 2) {
      a = n / 3;
      b = a + 1;
    } else {
      b = n / 3;
      a = b + 1;
    }
    cout << a << ' ' << b << '\n';
  }

  return 0;
}