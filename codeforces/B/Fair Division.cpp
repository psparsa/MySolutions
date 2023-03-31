// Problem: B. Fair Division
// Contest: Codeforces - Codeforces Round 693 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1472/B
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
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    int total = 0, ones = 0, tmp;
    for (int i = 0; i < n; ++i) {
      cin >> tmp;
      total += tmp;
      ones += tmp == 1;
    }

    if (total % 2 != 0) {
      cout << "NO" << endl;
      continue;
    }

    cout << (total / 2 % 2 == 0 || ones > 0 ? "YES" : "NO") << endl;
  }

  return 0;
}