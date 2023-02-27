#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  double n;
  long long int tmp;

  for (int i = 0; i < t; ++i) {
    cin >> n;
    tmp = ceil((n / 2) - 1);
    cout << tmp << endl;
  }

  return 0;
}