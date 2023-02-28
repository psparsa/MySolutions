// Problem: A. Cheap Travel
// Contest: Codeforces - Codeforces Round #266 (Div. 2)
// URL: https://codeforces.com/problemset/problem/466/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n, m, a, b, tmp;
  cin >> n >> m >> a >> b;

  if (m * a > b) {
    tmp = (n % m) * a;
    cout << (tmp > b ? n / m * b + b : n / m * b + tmp);
  } else
    cout << n * a;

  return 0;
}