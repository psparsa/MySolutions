// Problem: A. Remove Smallest
// Contest: Codeforces - Codeforces Round 661 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1399/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <iostream>
using namespace std;

int
main()
{
  int t;
  cin >> t;

  int n;
  while (t--) {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
      cin >> arr[i];

    sort(arr, arr + n);

    int diff, removed(0);
    for (int i = 0; i < n - 1; ++i) {
      diff = abs(arr[i] - arr[i + 1]);
      if (diff <= 1)
        ++removed;
      else
        break;
    }

    cout << (n - removed == 1 ? "YES" : "NO") << endl;
  }

  return 0;
}