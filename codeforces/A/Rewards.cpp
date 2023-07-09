// Problem: A. Rewards
// Contest: Codeforces - Codeforces Round 256 (Div. 2)
// URL: https://codeforces.com/problemset/problem/448/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  int b1, b2, b3;
  cin >> b1 >> b2 >> b3;

  int totalA = a1 + a2 + a3;
  int totalB = b1 + b2 + b3;

  int x = totalA == 0 ? 0 : max(1, totalA / 5);
  int y = totalB == 0 ? 0 : max(1, totalB / 10);
  int n;
  cin >> n;

  if (totalA > 5 && totalA % 5 != 0)
    ++x;

  if (totalB > 10 && totalB % 10 != 0)
    ++y;

  // cout << x;
  cout << (x + y <= n ? "YES" : "NO") << '\n';

  return 0;
}