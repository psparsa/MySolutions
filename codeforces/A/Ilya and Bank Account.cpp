// Problem: A. Ilya and Bank Account
// Contest: Codeforces - Codeforces Round #186 (Div. 2)
// URL: https://codeforces.com/problemset/problem/313/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << (n >= 0 ? n : max(n / 10, n / 100 * 10 + n % 10));
  return 0;
}