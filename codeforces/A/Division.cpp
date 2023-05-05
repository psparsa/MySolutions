// Problem: A. Division?
// Contest: Codeforces - Codeforces Round 784 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1669/A
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
    int r;
    cin >> r;
    int x(1);

    if (r <= 1899)
      x = 2;
    if (r <= 1599)
      x = 3;
    if (r <= 1399)
      x = 4;

    cout << "Division " << x << '\n';
  }
  return 0;
}