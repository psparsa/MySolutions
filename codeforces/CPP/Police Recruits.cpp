#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int p = 0, u = 0;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;

    if (x == -1) {
      if (p < 1)
        ++u;
      else
        --p;
    } else
      p = p + x;
  }

  cout << u;
  return 0;
}