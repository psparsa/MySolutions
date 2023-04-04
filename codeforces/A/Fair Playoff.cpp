// Problem: A. Fair Playoff
// Contest: Codeforces - Educational Codeforces Round 110 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1535/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
  int t;
  cin >> t;
  int a, b, c, d;
  while (t--) {
    cin >> a >> b >> c >> d;

    int w1 = max(a, b);
    int l1 = min(a, b);

    int w2 = max(c, d);
    int l2 = min(c, d);

    if (l1 > w2 || l2 > w1)
      cout << "NO";
    else
      cout << "YES";
    cout << endl;
  }
  return 0;
}