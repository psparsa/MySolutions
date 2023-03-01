// Problem: A. Choosing Teams
// Contest: Codeforces - Codeforces Round #246 (Div. 2)
// URL: https://codeforces.com/problemset/problem/432/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int n, k, tmp = 0, r = 0;
  cin >> n >> k;

  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    if (tmp + k <= 5) ++r;
  }

  cout << r / 3;
  return 0;
}