// Problem: A. Wrong Subtraction
// Contest: Codeforces - Codeforces Round #479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  unsigned long n;
  int k;
  cin >> n >> k;
  for (int x = 0; x < k; ++x)
    if (n % 10 == 0)
      n /= 10;
    else
      --n;
  cout << n;
  return 0;
}