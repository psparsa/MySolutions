// Problem: A. Candies and Two Sisters
// Contest: Codeforces - Codeforces Round #634 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1335/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  double n;
  long long int tmp;

  for (int i = 0; i < t; ++i) {
    cin >> n;
    tmp = ceil((n / 2) - 1);
    cout << tmp << endl;
  }

  return 0;
}