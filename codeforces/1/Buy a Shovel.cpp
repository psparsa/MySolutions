#include <iostream>
using namespace std;

int main() {
  int k, r, total = 0, count = 0;
  cin >> k >> r;

  do {
    total += k;
    ++count;
  } while (total % 10 != 0 && (total - r) % 10 != 0);

  cout << count << endl;
  return 0;
}