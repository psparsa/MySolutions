// Problem: B. Good Arrays
// Contest: Codeforces - Codeforces Round 890 (Div. 2) supported by Constructor
// Institute URL: https://codeforces.com/contest/1856/problem/B Memory Limit:
// 256 MB Time Limit: 1000 ms

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

    long long total(0);
    long long one(0);

    int x;
    for (int i = 0; i < n; ++i) {
      cin >> x;
      if (x == 1)
        ++one;
      total += x;
    }

    // cout <<"total: "<<total<<" one: "<<one<<'\n';
    cout << (total >= one + n && n > 1 ? "YES" : "NO") << '\n';
  }
}