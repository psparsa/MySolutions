// Problem: A. Soft Drinking
// Contest: Codeforces - Codeforces Round #107 (Div. 2)
// URL: https://codeforces.com/problemset/problem/151/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int answer = min(min(k * l / nl, c * d), p / np) / n;

  cout << answer;

  return 0;
}