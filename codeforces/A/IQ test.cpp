// Problem: A. IQ test
// Contest: Codeforces - Codeforces Beta Round #25 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/25/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int tmp;
  int e = 0, o = 0, l = 0;

  for (int i = 1; i <= n; ++i) {
    cin >> tmp;

    if (tmp % 2 == 0) {
      ++e;
      l = i;
    } else {
      --e;
      o = i;
    }

    // prevent unnecessary iterations
    if (e > 0 && o > 0) {
      cout << o;
      return 0;
    } else if (e < 0 && l > 0) {
      cout << l;
      return 0;
    }
  }

  return 0;
}