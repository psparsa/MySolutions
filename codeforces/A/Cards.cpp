// Problem: A. Cards
// Contest: Codeforces - Codeforces Round 586 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1220/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n;
  string s;
  cin >> n >> s;

  vector<int> vec;
  for (int i = 0; i < n; ++i)
    if (s[i] == 'z')
      vec.push_back(0);
    else if (s[i] == 'n')
      vec.push_back(1);

  sort(vec.begin(), vec.end(), greater<int>());

  for (int x : vec)
    cout << x << ' ';

  cout << '\n';
  return 0;
}