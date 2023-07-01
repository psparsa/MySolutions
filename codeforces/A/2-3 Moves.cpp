// Problem: A. 2-3 Moves
// Contest: Codeforces - Educational Codeforces Round 133 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1716/A
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
    int ans(n / 3);
    if (n % 3 != 0)
      ++ans;
    cout << (n == 1 ? 2 : ans) << '\n';
  }
  return 0;
}