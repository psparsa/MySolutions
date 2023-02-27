// Problem: A. Dislike of Threes
// Contest: Codeforces - Codeforces Round #739 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1560/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int list[1000];

  int pos = 0;
  for (int i = 1; i <= 1666; ++i)
    if ((i % 3 != 0) && (i % 10 != 3)) list[pos += 1] = i;

  int t, k;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    cin >> k;
    cout << list[k] << endl;
  }

  return 0;
}