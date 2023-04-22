// Problem: A. Add Odd or Subtract Even
// Contest: Codeforces - Codeforces Round 624 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1311/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
  int a, b;

  while (n--) {
    cin >> a >> b;

    if (a == b) {
      cout << 0 << '\n';
      continue;
    }

    int i(0);
    while (a != b) {
      int x = abs(a - b);
      if (a > b)
        a -= x % 2 == 0 ? x : x + 1;
      else
        a += x % 2 != 0 ? x : x - 1;

      ++i;
    }

    cout << i << '\n';
  }

  return 0;
}