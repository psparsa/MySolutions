// Problem: A. Colorful Stones (Simplified Edition)
// Contest: Codeforces - Codeforces Round 162 (Div. 2)
// URL: https://codeforces.com/problemset/problem/265/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int
main()
{
  string s, t;
  cin >> s >> t;
  int tmp = 1;
  for (char c : t)
    if (c == s[tmp - 1]) {
      ++tmp;
      // ِyeah I know!
      if (tmp > s.size())
        break;
    }
  cout << tmp << '\n';
  return 0;
}