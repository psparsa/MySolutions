// Problem: A. Raising Bacteria
// Contest: Codeforces - Codeforces Round 320 (Div. 2) [Bayan Thanks-Round]
// URL: https://codeforces.com/problemset/problem/579/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int
main()
{
  int x;
  cin >> x;

  int tmp = 0;
  while (x > 0) {
    tmp += x % 2;
    x /= 2;
  }
  cout << tmp;
  return 0;
}