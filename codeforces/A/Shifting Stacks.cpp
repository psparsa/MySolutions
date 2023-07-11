// Problem: A. Shifting Stacks
// Contest: Codeforces - Codeforces Round 703 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1486/A
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
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
      cin >> vec[i];
    long long tmp = 0;
    bool ans = true;
    for (int i = 0; i < n && ans; i++)
      if (vec[i] > i)
        tmp += (vec[i] - i);
      else if (vec[i] + tmp >= i)
        tmp -= (i - vec[i]);
      else
        ans = false;

    cout << (ans ? "YES" : "NO") << '\n';
  }

  return 0;
}