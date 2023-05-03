// Problem: A. Odd Set
// Contest: Codeforces - Codeforces Round 729 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1542/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cmath>
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
  while (t--) {
    int n;
    cin >> n;
    int odds(0);
    int tmp;
    for (int i = 0; i < n * 2; ++i) {
      cin >> tmp;
      if (tmp % 2 != 0)
        ++odds;
    }

    cout << (odds == n ? "Yes" : "No") << '\n';
  }

  return 0;
}