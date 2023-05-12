// Problem: A. Perfect Permutation
// Contest: Codeforces - Codeforces Round 144 (Div. 2)
// URL: https://codeforces.com/problemset/problem/233/A
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
  int n;
  cin >> n;

  if (n % 2 == 1)
    cout << -1;
  else
    for (int i = 1; i <= n; i += 2)
      cout << i + 1 << ' ' << i << ' ';

  cout << "\n";
  return 0;
}