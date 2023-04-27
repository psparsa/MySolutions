// Problem: B. Sale
// Contest: Codeforces - Codeforces Beta Round 34 (Div. 2)
// URL: https://codeforces.com/problemset/problem/34/B
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
  int n, m;
  cin >> n >> m;

  vector<int> vec;
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    if (tmp < 0)
      vec.push_back(tmp);
  }

  sort(vec.begin(), vec.end());

  int ans(0);
  for (int i = 0; i < vec.size() && i < m; ++i) {
    ans += abs(vec[i]);
  }

  cout << ans << '\n';

  return 0;
}