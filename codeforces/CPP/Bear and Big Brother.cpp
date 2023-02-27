#include <iostream>
using namespace std;

int main() {
  int a, b, r = 0;
  cin >> a;
  cin >> b;

  while (a <= b) {
    a = a * 3;
    b = b * 2;
    ++r;
  }

  cout << r;
  return 0;
}
