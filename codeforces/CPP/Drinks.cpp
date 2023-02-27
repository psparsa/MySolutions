// Problem: B. Drinks
// Contest: Codeforces - Codeforces Round #126 (Div. 2)
// URL: https://codeforces.com/problemset/problem/200/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int n, p;
  cin >> n;
  double tmp = 0.0;

  for (int i = 0; i < n; ++i) {
    cin >> p;
    tmp += p;
  }

  tmp /= n;

  cout << fixed << setprecision(12) << tmp;

  return 0;
}