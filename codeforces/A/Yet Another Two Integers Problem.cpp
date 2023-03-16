// Problem: A. Yet Another Two Integers Problem
// Contest: Codeforces - Codeforces Round 667 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1409/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int
main()
{
  int t, a, b, diff;
  cin >> t;

  while (t--) {
    cin >> a >> b;
    diff = abs(a - b);
    a = (diff - (diff % 10)) / 10;
    b = diff - (a * 10) > 0 ? 1 : 0;
    cout << a + b << endl;
  }

  return 0;
}