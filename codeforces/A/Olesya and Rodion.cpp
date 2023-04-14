// Problem: A. Olesya and Rodion
// Contest: Codeforces - Codeforces Round 324 (Div. 2)
// URL: https://codeforces.com/problemset/problem/584/A
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
  long n, t;
  cin >> n >> t;

  if (n == 1 && t == 10) {
    cout << "-1";
  } else if (t == 10) {
    for (int i = 1; i < n; ++i) cout << "1";
    cout << '0';
  } else {
    for (int i = 1; i <= n; ++i) cout << t;
  }

  cout << endl;
  return 0;
}