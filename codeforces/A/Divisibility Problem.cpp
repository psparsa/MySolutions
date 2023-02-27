// Problem: A. Divisibility Problem
// Contest: Codeforces - Codeforces Round #629 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1328/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    long long int a, b;
    cin >> a >> b;

    if (a % b == 0)
      cout << 0 << endl;
    else
      cout << (b - (a % b)) << endl;
  }

  return 0;
}