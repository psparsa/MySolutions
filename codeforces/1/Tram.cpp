#include <iostream>
using namespace std;

int main() {
  // (2 ≤ n ≤ 1000) — the number of the tram's stops.
  int n;
  cin >> n;

  int x = 0;
  int tmp = x;
  for (int i = 0; i < n; ++i) {
    // the number of passengers that exits the tram at the i-th stop
    int a;
    // the number of passengers that enter the tram at the i-th stop
    int b;

    cin >> a >> b;

    tmp -= a;
    tmp += b;
    if (tmp > x) x = tmp;
  }

  cout << x;
  return 0;
}