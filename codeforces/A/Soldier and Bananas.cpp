// Problem: A. Soldier and Bananas
// Contest: Codeforces - Codeforces Round #304 (Div. 2)
// URL: https://codeforces.com/problemset/problem/546/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
int main() {
  int k, n, w, r = 0;
  std::cin >> k >> n >> w;
  for (int x = 1; x <= w; x++) r += k * x;
  std::cout << (r >= n ? r - n : 0);
  return 0;
}