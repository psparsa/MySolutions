// Problem: A. Technical Support
// Contest: Codeforces - Codeforces Round 829 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1754/A
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
    string str;
    cin >> str;

    int q(1);
    for (int i = 1; i < n; ++i) {
      if (str[i] == 'A')
        q = max(0, q - 1);
      else
        ++q;
    }

    cout << (q != 0 ? "No" : "Yes") << '\n';
  }
  return 0;
}