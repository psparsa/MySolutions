#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool e = true;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x == 1) {
      e = false;
      break;
    }
  }

  cout << (e ? "EASY" : "HARD");
  return 0;
}