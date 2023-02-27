#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int n, p;
  cin >> n;
  double tmp = 0.0;

  for (int i = 0; i < n; ++i) {
    cin >> p;
    tmp += p;
  }

  tmp /= n;

  cout << fixed << setprecision(12) << tmp;

  return 0;
}