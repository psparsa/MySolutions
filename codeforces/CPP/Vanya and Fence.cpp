#include <iostream>
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;

  int x = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (a > h) x++;
  }

  int r = n - x;
  cout << r + (x * 2);

  return 0;
}