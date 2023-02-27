// Problem: A. Restoring Three Numbers
// Contest: Codeforces - Codeforces Round #552 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1154/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int l[4] = {0};
  cin >> l[0] >> l[1] >> l[2] >> l[3];

  sort(l, l + 4);

  int biggest = l[3];

  int a = biggest - l[0];
  int b = biggest - l[1];
  int c = biggest - l[2];

  cout << a << " " << b << " " << c;

  return 0;
}