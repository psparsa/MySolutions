// Problem: B. Interesting drink
// Contest: Codeforces - Codeforces Round 367 (Div. 2)
// URL: https://codeforces.com/problemset/problem/706/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <iostream>
using namespace std;

int
main()
{
  int n, q; // q consecutive days!
  cin >> n;
  int x[100000]; // prices of the bottles of the drink in the shops
  for (int i = 0; i < n; ++i)
    cin >> x[i];
  cin >> q; // the number of days Vasiliy plans to buy the drink

  sort(x, x + n);

  int m;
  for (int i = 0; i < q; i++) {
    cin >> m; // the number of coins Vasiliy can spent
    cout << (upper_bound(x, x + n, m) - x) << endl;
  }

  return 0;
}