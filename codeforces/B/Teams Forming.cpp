// Problem: B. Teams Forming
// Contest: Codeforces - Codeforces Round 527 (Div. 3)
// URL: https://codeforces.com/contest/1092/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  int ans = 0;
  for (int i = 0; i < n; ++i)
    cin >> vec[i];
  sort(vec.begin(), vec.end());
  for (int i = 0; i < n; i += 2) {
    ans += vec[i + 1] - vec[i];
  }
  cout << ans;
  return 0;
}