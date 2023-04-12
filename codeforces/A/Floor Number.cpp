// Problem: A. Floor Number
// Contest: Codeforces - Codeforces Round 674 (Div. 3)
// URL: https://codeforces.com/contest/1426/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

// sucks 2
int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, x, tmp(2), ans(1);
    cin >> n >> x;

    while (tmp < n) {
      tmp += x;
      ans++;
    }

    cout << ans << endl;
  }

  return 0;
}