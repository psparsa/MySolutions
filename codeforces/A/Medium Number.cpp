// Problem: A. Medium Number
// Contest: Codeforces - Codeforces Round 835 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1760/A
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
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    int t0 = max(a, max(b, c));
    int t1 = min(a, min(b, c));

    int ans = (a + b + c) - (t0 + t1);

    cout << ans << '\n';
  }
  return 0;
}