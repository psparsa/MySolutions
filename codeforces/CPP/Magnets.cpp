// Problem: A. Magnets
// Contest: Codeforces - Codeforces Round #200 (Div. 2)
// URL: https://codeforces.com/problemset/problem/344/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n, result = 0;
  cin >> n;

  int a[n + 1];

  for (int i = 0; i < n; ++i) cin >> a[i];

  for (int i = 0; i < n; ++i)
    if (a[i] != a[i + 1]) ++result;

  cout << result;
  return 0;
}