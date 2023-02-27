// Problem: A. Vasya the Hipster
// Contest: Codeforces - Codeforces Round #322 (Div. 2)
// URL: https://codeforces.com/problemset/problem/581/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  cout << min(a, b) << ' ' << (abs(a - b) / 2) << endl;

  return 0;
}