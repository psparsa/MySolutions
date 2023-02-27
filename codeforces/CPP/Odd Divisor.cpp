// Problem: A. Odd Divisor
// Contest: Codeforces - Codeforces Round #697 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1475/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

#define ull unsigned long long int

bool doesHaveOddDivisor(ull n) {
  for (ull i = n; i > 1; i /= 2) {
    if (n % i == 0)
      if (i % 2 != 0) return true;
  }

  return false;
}

int main() {
  int t;
  cin >> t;
  ull tmp;
  for (int i = 0; i < t; ++i) {
    cin >> tmp;
    cout << (doesHaveOddDivisor(tmp) ? "YES" : "NO") << endl;
  }
  return 0;
}