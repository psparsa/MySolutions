// Problem: A. The number of positions
// Contest: Codeforces - Codeforces Beta Round 92 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/124/A
// Memory Limit: 256 MB
// Time Limit: 500 ms

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

  int n, a, b;
  cin >> n >> a >> b;

  int ans = min(n - a, b + 1);

  cout << ans << endl;

  return 0;
}