// Problem: A. New Year Candles
// Contest: Codeforces - Good Bye 2013
// URL: https://codeforces.com/problemset/problem/379/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int ans(a);

  while (a >= b) {
    ans += a / b;
    // cout << "Ping: " << a << endl;
    a = a / b + a % b;
  }

  cout << ans << endl;
  return 0;
}