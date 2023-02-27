#include <iostream>
using namespace std;

int main() {
  int n, result = 0;
  cin >> n;

  int a[n + 1];

  for (int i = 0; i < n; ++i) cin >> a[i];

  for (int i = 0; i < n; ++i)
    if (a[i] != a[i + 1]) ++result;

  cout << result;
  return 0;
}