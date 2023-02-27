// Problem: A. Elephant
// Contest: Codeforces - Codeforces Round #340 (Div. 2)
// URL: https://codeforces.com/problemset/problem/617/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  cout << x / 5 + (x % 5 > 0 ? 1 : 0);
  return 0;
}