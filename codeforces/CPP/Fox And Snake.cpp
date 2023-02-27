#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  for (int x = 1; x <= a; ++x) {
    for (int y = 0; y < b; ++y)
      if (x % 4 == 0)
        if (y == 0)
          cout << "#";
        else
          cout << ".";
      else if (x % 4 == 2)
        if (y == b - 1)
          cout << "#";
        else
          cout << ".";
      else
        cout << "#";

    cout << endl;
  }
}