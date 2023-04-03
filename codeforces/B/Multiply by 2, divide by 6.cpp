// Problem: B. Multiply by 2, divide by 6
// Contest: Codeforces - Codeforces Round 653 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1374/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int
main()
{
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    int x = 0;

    if (n % 3 != 0 && n != 1) {
      cout << -1 << endl;
      continue;
    }

    while (n != 1) {
      if (n % 3 != 0) {
        cout << -1 << endl;
        break;
      } else if (n % 6 == 0)
        n /= 6;
      else
        n = n * 2;

      ++x;
    }

    if (n == 1)
      cout << x << endl;
  }

  return 0;
}