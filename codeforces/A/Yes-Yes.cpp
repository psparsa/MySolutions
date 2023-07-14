// Problem: A. Yes-Yes?
// Contest: Codeforces - Codeforces Round  834 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1759/A
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
    string s;
    cin >> s;
    string yes = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    cout << (yes.find(s) != string::npos ? "YES" : "NO") << '\n';
  }
  return 0;
}