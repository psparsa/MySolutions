// Problem: A. Insomnia cure
// Contest: Codeforces - Codeforces Round #105 (Div. 2)
// URL: https://codeforces.com/problemset/problem/148/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int k, l, m, n, d, result = 0;
  cin >> k >> l >> m >> n >> d;

  for (int i = 1; i <= d; ++i)
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) ++result;

  cout << result << endl;

  return 0;
}