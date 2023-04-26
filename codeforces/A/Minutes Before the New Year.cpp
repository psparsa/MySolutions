// Problem: A. Minutes Before the New Year
// Contest: Codeforces - Codeforces Round 611 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1283/A
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
    int h, m;
    cin >> h >> m;
    cout << (24 * 60) - (h * 60 + m) << endl;
  }

  return 0;
}