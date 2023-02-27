#include <iostream>
using namespace std;

int main() {
  int n, b = 0, r = 0;
  cin >> n;
  int l[n];

  for (int i = 0; i < n; ++i) cin >> l[i];

  for (int x : l) b = b < x ? x : b;

  for (int x : l) r += b - x;

  cout << r;

  return 0;
}