// Problem: A. Cards for Friends
// Contest: Codeforces - Codeforces Round 693 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1472/A
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
    long long ans = 1;
    int w, h, n;
    cin >> w >> h >> n;

    while (w % 2 == 0) {
      ans *= 2;
      w /= 2;
    }
    while (h % 2 == 0) {
      ans *= 2;
      h /= 2;
    }

    cout << (n <= ans ? "YES" : "NO") << endl;
  }

  return 0;
}
