// Problem: A. Payment Without Change
// Contest: Codeforces - Codeforces Round 598 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1256/A
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
    int a, b, n, s;
    cin >> a >> b >> n >> s;
    cout << (s - n * min(s / n, a) <= b ? "YES" : "NO") << endl;
  }
  return 0;
}