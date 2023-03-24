// Problem: A. Cut Ribbon
// Contest: Codeforces - Codeforces Round 119 (Div. 2)
// URL: https://codeforces.com/problemset/problem/189/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <iostream>
using namespace std;

int
main()
{
  int n, a, b, c;
  int arr[4000];
  arr[0] = 0;
  cin >> n >> a >> b >> c;

  for (int i = 1; i <= n; i++) {
    arr[i] = -1;
    if (i >= a)
      arr[i] = max(arr[i], arr[i - a]);

    if (i >= b)
      arr[i] = max(arr[i], arr[i - b]);

    if (i >= c)
      arr[i] = max(arr[i], arr[i - c]);

    if (arr[i] >= 0)
      ++arr[i];
  }

  cout << arr[n];
  return 0;
}