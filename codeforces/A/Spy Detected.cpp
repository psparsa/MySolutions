// Problem: A. Spy Detected!
// Contest: Codeforces - Codeforces Round 713 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1512/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

int
main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    array<int, 2> arr[100];

    for (int i = 0; i < n; ++i) {
      cin >> arr[i][0];
      arr[i][1] = i;
    }

    sort(arr, arr + n);

    if (arr[0][0] == arr[1][0])
      cout << arr[n - 1][1] + 1;
    else
      cout << arr[0][1] + 1;
    cout << endl;
  }
}