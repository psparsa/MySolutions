// Problem: B. New Year's Number
// Contest: Codeforces - Codeforces Round 697 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1475/B
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
  int t, n;
  cin >> t;
  while (t--) {
    bool ans = 1;
    cin >> n;

    if (n < 2020)
      ans = 0;
    else {
      int tmp = n % 2020;
      if (tmp > n / 2020)
        ans = 0;
    }

    cout << (ans ? "YES" : "NO") << '\n';
  }

  return 0;
}