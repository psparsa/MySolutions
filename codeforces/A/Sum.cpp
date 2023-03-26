// Problem: A. Sum
// Contest: Codeforces - Codeforces Round 827 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1742/A
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
  int a, b, c;
  while (t--) {
    cin >> a >> b >> c;
    bool x = false;

    if (a + b == c)
      x = 1;
    if (a + c == b)
      x = 1;
    if (b + c == a)
      x = 1;

    cout << (x ? "YES" : "NO") << endl;
  }
  return 0;
}