// Problem: A. Army
// Contest: Codeforces - School Personal Contest #1 (Winter Computer School
// 2010/11) - Codeforces Beta Round 38 (ACM-ICPC Rules) URL:
// https://codeforces.com/contest/38/problem/A Memory Limit: 256 MB Time Limit:
// 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 1; i < n; ++i)
    cin >> vec[i];
  int a, b, ans(0);
  cin >> a >> b;
  for (int i = a; i < b; ++i)
    ans += vec[i];
  cout << ans;
  return 0;
}