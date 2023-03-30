// Problem: A. Candies
// Contest: Codeforces - Codeforces Round 636 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1343/A
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
    long long tmp = 1;

    for (int i = 1; i < 50; ++i) {
      tmp = 2 * tmp + 1;
      if (n % tmp == 0) {
        cout << (n / tmp) << endl;
        break;
      }
    }
  }

  return 0;
}