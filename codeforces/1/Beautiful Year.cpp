#include <iostream>
using namespace std;

int main() {
  int y;
  cin >> y;
  while (1) {
    ++y;
    int a = y / 1000;
    int b = y / 100 % 10;
    int c = y / 10 % 10;
    int d = y % 10;
    if (a != b)
      if (a != c)
        if (a != d)
          if (b != c)
            if (b != d)
              if (c != d) break;
  }
  cout << y;
  return 0;
}
