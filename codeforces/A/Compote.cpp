// Problem: A. Compote
// Contest: Codeforces - Codeforces Round 386 (Div. 2)
// URL: https://codeforces.com/contest/746/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{

  int a, b, c;
  cin >> a >> b >> c;
  cout << (min(min(b / 2, c / 4), a) * 7);
  nl return 0;
}