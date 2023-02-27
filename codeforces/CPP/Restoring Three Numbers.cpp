#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int l[4] = {0};
  cin >> l[0] >> l[1] >> l[2] >> l[3];

  sort(l, l + 4);

  int biggest = l[3];

  int a = biggest - l[0];
  int b = biggest - l[1];
  int c = biggest - l[2];

  cout << a << " " << b << " " << c;

  return 0;
}