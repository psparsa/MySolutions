// Problem: B. Mahmoud and a Triangle
// Contest: Codeforces - Codeforces Round 396 (Div. 2)
// URL: https://codeforces.com/problemset/problem/766/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n;
  cin >> n;

  vector<int> vec;

  int x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    vec.push_back(x);
  }

  sort(vec.begin(), vec.end());

  bool ans(false);
  int a, b, c;
  for (int i = 0; i < n - 2; ++i) {
    a = vec[i];
    b = vec[i + 1];
    c = vec[i + 2];

    if ((a + b) > c) {
      ans = true;
      break;
    }
  }

  cout << (ans ? "YES" : "NO") << '\n';

  return 0;
}