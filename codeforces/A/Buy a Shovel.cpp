// Problem: A. Buy a Shovel
// Contest: Codeforces - Codeforces Round #377 (Div. 2)
// URL: https://codeforces.com/problemset/problem/732/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int k, r, total = 0, count = 0;
  cin >> k >> r;

  do {
    total += k;
    ++count;
  } while (total % 10 != 0 && (total - r) % 10 != 0);

  cout << count << endl;
  return 0;
}