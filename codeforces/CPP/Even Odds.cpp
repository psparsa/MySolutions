#include <iostream>
#include <vector>
using namespace std;

int main() {
  unsigned long long n, k;
  cin >> n >> k;

  // odd
  if (k <= (n + 1) / 2) cout << (k * 2) - 1;
  // even
  else
    cout << (k - ((n + 1) / 2)) * 2;

  return 0;
}

// 1, 3, 5, 7, 9, 2, 4, 6, 8, 10

// n = 10
// k = 3

// if (3 <= 6)
//	then (3 * 2) - 1

// n = 10
// k = 6

//	else (6 - 5) * 2