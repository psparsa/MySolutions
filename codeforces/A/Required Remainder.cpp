// Problem: A. Required Remainder
// Contest: Codeforces - Codeforces Round 653 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1374/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  long long int t, tmp(0);
  cin >> t;

  long long int x, y, n;
  while (t--) {
    cin >> x >> y >> n;
    tmp = n - n % x + y;
    cout << (tmp > n ? (n - n % x - (x - y)) : tmp) << endl;
  }

  return 0;
}
