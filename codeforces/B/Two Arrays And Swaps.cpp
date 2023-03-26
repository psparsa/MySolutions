// Problem: B. Two Arrays And Swaps
// Contest: Codeforces - Codeforces Round 642 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1353/B
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
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    int a[30];
    int b[30];
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; ++i)
      cin >> b[i];
    sort(b, b + n);

    int moves = 0;
    for (int i = 0; i < n; ++i) {
      if (moves >= k)
        break;
      bool swapped = false;
      for (int j = n - 1; j >= 0; --j) {
        if (a[i] < b[j]) {
          swap(a[i], b[j]);
          swapped = true;
          ++moves;
          break;
        }
      }

      if (!swapped)
        break;
    }

    int sum = 0;
    for (int i = 0; i < n; ++i)
      sum += a[i];

    cout << sum << endl;
  }
  return 0;
}