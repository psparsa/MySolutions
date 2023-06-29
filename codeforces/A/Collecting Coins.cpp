// Problem: A. Collecting Coins
// Contest: Codeforces - Codeforces Round 615 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1294/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << ((a + b + c + n) % 3 == 0 && a <= (a + b + c + n) / 3 &&
                 b <= (a + b + c + n) / 3 && c <= (a + b + c + n) / 3
               ? "YES"
               : "NO")
         << '\n';
  }
  return 0;
}
