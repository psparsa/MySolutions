#include <iostream>
using namespace std;

int main() {
  unsigned long n;
  int k;
  cin >> n >> k;
  for (int x = 0; x < k; ++x)
    if (n % 10 == 0)
      n /= 10;
    else
      --n;
  cout << n;
  return 0;
}