// Problem: A. Design Tutorial: Learn from Math
// Contest: Codeforces - Codeforces Round 270
// URL: https://codeforces.com/problemset/problem/472/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <math.h>

#include <iostream>
using namespace std;

bool isComposite(int n) {
  if (n < 2) return false;

  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0) return true;

  return false;
}

int main() {
  int n;
  cin >> n;

  int c, tmp;
  for (int i = 2; i < 1000000; ++i) {
    c = isComposite(i);
    if (c) {
      tmp = isComposite(n - i);

      if (tmp) {
        cout << i << " " << (n - i);
        return 0;
      }
    }
  }
}