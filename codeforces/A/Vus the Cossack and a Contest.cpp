// Problem: A. Vus the Cossack and a Contest
// Contest: Codeforces - Codeforces Round 571 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1186/A
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
  int n, m, k;
  cin >> n >> m >> k;
  cout << (min(m, k) >= n ? "Yes" : "No") << '\n';
  return 0;
}