// Problem: A. Dragons
// Contest: Codeforces - Codeforces Round 142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

int main() {
  int s, n;
  cin >> s >> n;

  // s = Kirito's strength
  // n = number of dragons
  array<int, 2> arr[n];
  for (int i = 0; i < n; ++i) cin >> arr[i][0] >> arr[i][1];

  sort(arr, arr + n);

  int x, y;
  for (int i = 0; i < n; ++i) {
    x = arr[i][0];
    y = arr[i][1];
    // x = dragon's strength
    // y = bonus

    if (s > x)
      s += y;
    else {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
  return 0;
}