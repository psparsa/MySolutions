// Problem: A. Bachgold Problem
// Contest: Codeforces - Codeforces Round 388 (Div. 2)
// URL: https://codeforces.com/problemset/problem/749/A
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
  int k;
  cin >> k;
  const bool isOdd = k % 2 == 0;
  k /= 2;

  if (isOdd)
    cout << (k) << endl;
  else
    cout << k << endl << 3 << ' ';

  for (int i = 0; i < k - (isOdd ? 0 : 1); ++i)
    cout << 2 << ' ';

  cout << endl;
  return 0;
}