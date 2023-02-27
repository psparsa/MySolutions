// Problem: A. Fox And Snake
// Contest: Codeforces - Codeforces Round #290 (Div. 2)
// URL: https://codeforces.com/problemset/problem/510/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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