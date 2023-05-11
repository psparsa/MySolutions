// Problem: A. EhAb AnD gCd
// Contest: Codeforces - Codeforces Round 628 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1325/A
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
  int a(0), b(0);
  while (t--) {
    int n;
    cin >> n;
    if (n % 2 == 0)
      a = b = n / 2;
    else
      a = n - 1, b = 1;
    cout << a << ' ' << b << '\n';
  }
  return 0;
}