// Problem: B. Increasing
// Contest: Codeforces - Codeforces Round 827 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1742/B
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

    int arr[n];
    for (int i = 0; i < n; ++i)
      cin >> arr[i];

    sort(arr, arr + n);

    bool tmp = true;
    for (int i = 1; i < n && tmp; ++i)
      if (arr[i] == arr[i - 1])
        tmp = false;

    cout << (tmp ? "YES" : "NO") << '\n';
  }
  return 0;
}