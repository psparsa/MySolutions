// Problem: B. Balanced Array
// Contest: Codeforces - Codeforces Round 636 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1343/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int
main()
{
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    if (n % 4 == 0) {
      int x(0);
      int y(0);
      cout << "YES" << endl;

      for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
        x += i;
      }

      for (int i = 1; i < n - 2; i += 2) {
        cout << i << " ";
        y += i;
      }

      cout << x - y << endl;

    } else
      // reason: because the sum of N odd numbr is odd
      // (when N is an odd)

      // e.g: an array with length 6 has two part, right?
      // so each half should have 6/2=3 numbers...
      // the sum of 3 odd number is odd and the sum of
      // 3 even number is even! this is why I wrote this condition
      cout << "NO" << endl;
  }

  return 0;
}