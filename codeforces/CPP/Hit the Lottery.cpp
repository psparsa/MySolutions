#include <iostream>
using namespace std;

int main() {
  long int n;
  cin >> n;

  int bills[] = {100, 20, 10, 5, 1}, x = 0;

  for (int i = 0; i < 5; ++i) {
    x = x + (n / bills[i]);
    n = n % bills[i];
  }

  cout << x;

  return 0;
}
