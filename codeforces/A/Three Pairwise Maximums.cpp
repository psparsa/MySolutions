// Problem: A. Three Pairwise Maximums
// Contest: Codeforces - Codeforces Round 656 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1385/A
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

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;
    int arr[] = {x, y, z};
    sort(arr, arr + 3);

    if (arr[1] == arr[2])
      cout << "YES\n" << arr[0] << ' ' << arr[0] << ' ' << arr[2] << '\n';
    else
      cout << "NO" << endl;
  }

  return 0;
}