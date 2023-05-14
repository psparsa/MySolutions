// Problem: A. Fafa and his Company
// Contest: Codeforces - Codeforces Round 465 (Div. 2)
// URL: https://codeforces.com/problemset/problem/935/A
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
  int n;
  cin >> n;

  int ans(1);
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      ans += (i * i == n) ? 1 : 2;

  cout << ans << '\n';
  return 0;
}