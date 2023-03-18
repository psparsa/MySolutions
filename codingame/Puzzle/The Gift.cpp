// Problem: The Gift
// Mode: Puzzle
// URL: https://www.codingame.com/training/medium/the-gift

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int
main()
{
  int n, c;
  cin >> n >> c;

  int total(0);
  int arr1[n];
  int arr2[n] = { 0 };

  for (int i = 0; i < n; ++i) {
    cin >> arr1[i];
    total += arr1[i];
  }

  if (total < c)
    cout << "IMPOSSIBLE";
  else {
    while (c > 0) {
      for (int i = 0; i < n && c > 0; ++i) {
        if (arr1[i] > 0) {
          --arr1[i];
          ++arr2[i];
          --c;
        }
      }
    }

    sort(arr2, arr2 + n);

    for (int i = 0; i < n; ++i) {
      cout << arr2[i] << endl;
    }
  }
}