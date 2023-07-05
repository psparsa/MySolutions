// Problem: B. Love Song
// Contest: Codeforces - Codeforces Round 727 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1539/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;

  int arr[100000];
  for (int i = 1; i <= n; ++i)
    arr[i] = arr[i - 1] + (s[i - 1] - 'a' + 1);

  while (q--) {
    int a, b;
    cin >> a >> b;
    cout << arr[b] - arr[a - 1] << '\n';
  }

  return 0;
}