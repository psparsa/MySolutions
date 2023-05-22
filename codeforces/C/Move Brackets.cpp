// Problem: C. Move Brackets
// Contest: Codeforces - Codeforces Round 653 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1374/C
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

  while (t--) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int tmp(0), ans(0);
    for (int i = 0; i < n; i++) {
      tmp += str[i] == '(' ? 1 : -1;
      if (tmp < 0) {
        ++ans;
        tmp = 0;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}