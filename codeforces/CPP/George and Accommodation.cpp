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

