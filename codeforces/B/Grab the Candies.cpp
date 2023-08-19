// Problem: B. Grab the Candies
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/B
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

    int x, oddSum(0), evenSum(0);
    for (int i = 0; i < n; ++i) {
      cin >> x;
      if (x % 2)
        oddSum += x;
      else
        evenSum += x;
    }

    cout << (evenSum > oddSum ? "YES" : "NO") << '\n';
  }

  return 0;
}