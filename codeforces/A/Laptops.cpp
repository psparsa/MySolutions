// Problem: A. Laptops
// Contest: Codeforces - Codeforces Round 260 (Div. 2)
// URL: https://codeforces.com/problemset/problem/456/A
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
  int n;
  cin >> n;

  array<int, 2> arr[100000];

  for (int i = 0; i < n; ++i)
    cin >> arr[i][0] >> arr[i][1];

  sort(arr, arr + n);

  bool tmp = 0;

  for (int i = 0; i < n - 1; ++i)
    if (arr[i][0] < arr[i + 1][0])
      if (arr[i][1] > arr[i + 1][1]) {
        tmp = 1;
        break;
      }

  cout << (tmp ? "Happy Alex" : "Poor Alex") << '\n';

  return 0;
}