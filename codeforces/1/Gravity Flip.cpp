#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int l[n] = {0};

  for (int i = 0; i < n; ++i) cin >> l[i];

  sort(l, l + n);

  for (int x : l) cout << x << " ";

  return 0;
}