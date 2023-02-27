#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int list[100];
  for (int i = 0; i < n; ++i) cin >> list[i];

  // list = 2, 3, 4, 1
  // indx = 0, 1, 2, 3
  for (int i = 1; i <= n; ++i)

    for (int x = 0; x < n; ++x)

      if (list[x] == i) {
        cout << x + 1 << ' ';
        break;
      }

  return 0;
}