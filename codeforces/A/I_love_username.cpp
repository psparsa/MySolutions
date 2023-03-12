// Problem: A. I_love_%username%
// Contest: Codeforces - Codeforces Round 109 (Div. 2)
// URL: https://codeforces.com/problemset/problem/155/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int tmp, l, m, a(0);

  cin >> tmp;
  l = tmp;
  m = tmp;

  for (int i = 1; i < n; ++i) {
    cin >> tmp;
    if (tmp < l) {
      l = tmp;
      ++a;
    } else if (tmp > m) {
      m = tmp;
      ++a;
    }
  }

  cout << a;

  return 0;
}