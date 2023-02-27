// Problem: A. Hit the Lottery
// Contest: Codeforces - Codeforces Round #492 (Div. 2) [Thanks, uDebug!]
// URL: https://codeforces.com/problemset/problem/996/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  long int n;
  cin >> n;

  int bills[] = {100, 20, 10, 5, 1}, x = 0;

  for (int i = 0; i < 5; ++i) {
    x = x + (n / bills[i]);
    n = n % bills[i];
  }

  cout << x;

  return 0;
}
