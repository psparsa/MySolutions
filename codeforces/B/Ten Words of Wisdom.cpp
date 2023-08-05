// Problem: B. Ten Words of Wisdom
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int winner = 0;
    int tmp = 0;
    for (int i = 0; i < n; ++i) {
      int a, b;
      cin >> a >> b;
      if (a <= 10) {
        if (b > tmp) {
          tmp = b;
          winner = i + 1;
        }
      }
    }

    cout << winner << '\n';
  }
  return 0;
}
