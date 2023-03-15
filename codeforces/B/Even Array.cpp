// Problem: B. Even Array
// Contest: Codeforces - Codeforces Round 650 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1367/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  int n, moves;
  while (t--) {
    cin >> n;
    int arr[n];
    moves = 0;
    for (int i = 0; i < n; ++i) cin >> arr[i];

    bool isBad = true;
    for (int i = 0; i < n; ++i) {
      isBad = i % 2 != arr[i] % 2;

      //
      // if (n == 4) {
      // cout << "isBad: " << (isBad ? "True" : "False") << " " << arr[i]
      // << endl;
      // }

      if (isBad && i == n - 1)
        break;
      else if (isBad) {
        for (int j = i + 1; j < n; ++j) {
          if (j % 2 != arr[j] % 2) {
            if (i % 2 == arr[j] % 2) {
              // if (n == 2) {
              // cout << "arr[i]: " << arr[i] << " arr[j] " << arr[j]
              // << " i: " << i << " j: " << j << endl;
              // }
              swap(arr[i], arr[j]);
              isBad = false;
              ++moves;
              break;
            }
          }
        }
      }

      if (isBad) break;
    }

    cout << (isBad ? -1 : moves) << endl;
  }

  return 0;
}