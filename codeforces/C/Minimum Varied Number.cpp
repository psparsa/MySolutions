// Problem: C. Minimum Varied Number
// Contest: Codeforces - Codeforces Round 811 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1714/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (n < 10) {
      cout << n;
      nl;
    } else {
      // not sure if the order of the numbers matters!
      string ans = "";
      for (int i = 9; i > 0 && n > 0; --i) {
        if (i <= n) {
          n -= i;
          ans += to_string(i);
        }
      }
      reverse(ans.begin(), ans.end());
      cout << ans;
      nl;
    }
  }
  return 0;
}