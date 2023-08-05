// Problem: A. To My Critics
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/A
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10 || a + c >= 10 || b + c >= 10)
      cout << "YES";
    else
      cout << "NO";
    cout << '\n';
  }
  return 0;
}
