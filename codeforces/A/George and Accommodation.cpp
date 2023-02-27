// Problem: A. George and Accommodation
// Contest: Codeforces - Codeforces Round #267 (Div. 2)
// URL: https://codeforces.com/problemset/problem/467/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 0;
  while (n > 0) {
    int p, q;
    cin >> p >> q;
    if ((q - p) > 1) x++;
    --n;
  }
  cout << x;
  return 0;
}
