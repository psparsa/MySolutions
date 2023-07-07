// Problem: A. Average Height
// Contest: Codeforces - Codeforces Round 715 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1509/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector<int> odds;
    vector<int> evens;
    int tmp;
    for (int i = 0; i < n; ++i) {
      cin >> tmp;
      if (tmp % 2 == 0)
        evens.push_back(tmp);
      else
        odds.push_back(tmp);
    }
    for (int o : odds)
      cout << o << ' ';
    for (int e : evens)
      cout << e << ' ';
    cout << '\n';
  }
}