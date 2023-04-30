// Problem: A. Case of the Zeros and Ones
// Contest: Codeforces - Codeforces Round 310 (Div. 2)
// URL: https://codeforces.com/problemset/problem/556/A
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
  int n, t0(0), t1(0);
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++)
    if (s[i] == '0')
      t0++;
    else
      t1++;
  cout << n - (min(t0, t1) * 2) << endl;
  return 0;
}