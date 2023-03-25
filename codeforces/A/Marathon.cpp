// Problem: A. Marathon
// Contest: Codeforces - Codeforces Round 799 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1692/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
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
  int a, b, c, d;

  while (t--) {
    cin >> a >> b >> c >> d;
    int x = 0;
    if (b > a)
      x++;
    if (c > a)
      x++;
    if (d > a)
      x++;
    cout << x << endl;
  }

  return 0;
}