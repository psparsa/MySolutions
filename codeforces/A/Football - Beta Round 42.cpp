// Problem: A. Football
// Contest: Codeforces - Codeforces Beta Round 42 (Div. 2)
// URL: https://codeforces.com/problemset/problem/43/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
  int n;
  cin >> n;

  string a = "_", b = "_";
  int aa(0), bb(0);

  string t;
  for (int i = 0; i < n; ++i) {
    cin >> t;

    if (i == 0)
      a = t;
    else if (t != a)
      b = t;

    if (t == a)
      ++aa;

    if (t == b)
      ++bb;
  }

  cout << (aa > bb ? a : b) << endl;

  return 0;
}