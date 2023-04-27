// Problem: A. Vanya and Cubes
// Contest: Codeforces - Codeforces Round 280 (Div. 2)
// URL: https://codeforces.com/problemset/problem/492/A
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
sumToN(int n)
{
  int total = 0;
  for (int i = 1; i <= n; i++)
    total += i;

  return total;
}

int
main()
{
  int n;
  cin >> n;

  int ans(0);

  for (int i = 1; i < 1000000; ++i) {
    int x = sumToN(i);
    if (n >= x) {
      n -= x;
      ++ans;
    } else
      break;
  }

  cout << ans << '\n';

  return 0;
}