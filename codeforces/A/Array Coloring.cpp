// Problem: A. Array Coloring
// Contest: Codeforces - Codeforces Round 891 (Div. 3)
// URL: https://codeforces.com/contest/1857/problem/A
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

    int odds = 0;
    int tmp;
    for (int i = 0; i < n; ++i) {
      cin >> tmp;

      if (tmp % 2)
        odds++;
    }

    cout << (odds % 2 ? "NO" : "YES") << '\n';
  }
}