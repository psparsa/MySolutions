// Problem: A. Calculating Function
// Contest: Codeforces - Codeforces Round #277 (Div. 2)
// URL: https://codeforces.com/problemset/problem/486/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  cout << (n % 2 == 0 ? n / 2 : ((n + 1) / 2) * (-1));
  return 0;
}