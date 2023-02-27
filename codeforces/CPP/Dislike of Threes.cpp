#include <iostream>
using namespace std;

int main() {
  int list[1000];

  int pos = 0;
  for (int i = 1; i <= 1666; ++i)
    if ((i % 3 != 0) && (i % 10 != 3)) list[pos += 1] = i;

  int t, k;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    cin >> k;
    cout << list[k] << endl;
  }

  return 0;
}