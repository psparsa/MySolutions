// Problem: A. Vanya and Fence
// Contest: Codeforces - Codeforces Round #355 (Div. 2)
// URL: https://codeforces.com/problemset/problem/677/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;

  int x = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (a > h) x++;
  }

  int r = n - x;
  cout << r + (x * 2);

  return 0;
}