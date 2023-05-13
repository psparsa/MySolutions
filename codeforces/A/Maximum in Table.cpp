// Problem: A. Maximum in Table
// Contest: Codeforces - Codeforces Round 289 (Div. 2, ACM ICPC Rules)
// URL: https://codeforces.com/problemset/problem/509/A
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

  array<int, 10> arr[10];
  for (int i = 0; i < n; ++i) {
    arr[i][0] = 1;
    arr[0][i] = 1;
  }

  for (int i = 1; i < n; ++i)
    for (int j = 1; j < n; ++j)
      arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
  cout << arr[n - 1][n - 1] << '\n';
  return 0;
}