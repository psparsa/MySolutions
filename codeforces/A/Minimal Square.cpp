// Problem: A. Minimal Square
// Contest: Codeforces - Codeforces Round 644 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1360/A
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
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int t0 = max(a, b);
    int t1 = min(a, b) * 2;
    int t2 = max(t0, t1);
    int t3 = t2 * t2;
    cout << t3 << '\n';
  }
  return 0;
}