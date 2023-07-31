// Problem: A. Is It a Cat?
// Contest: Codeforces - Codeforces Round 855 (Div. 3)
// URL: https://codeforces.com/contest/1800/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    string s;
    int n;
    cin >> n >> s;
    for (char& c : s)
      c = tolower(c);
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << (s == "meow" ? "YES" : "NO") << '\n';
  }
}
