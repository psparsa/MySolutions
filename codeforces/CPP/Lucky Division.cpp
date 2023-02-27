#include <iostream>
using namespace std;

int main() {
  int l[] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};
  int n;
  cin >> n;

  bool x = false;
  for (size_t i = 0; i < sizeof(l) / sizeof(int); ++i) {
    if (n % l[i] == 0) {
      x = true;
      break;
    }
  }

  cout << (x ? "YES" : "NO");

  return 0;
}