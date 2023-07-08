// Problem: A. New Palindrome
// Contest: Codeforces - Educational Codeforces Round 148 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1832/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

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
    int n(s.length());

    bool ans(0);

    if (n > 3) {
      set<char> _set;
      for (char c : s)
        _set.insert(c);
      if (_set.size() > 1) {
        if (n % 2 == 0)
          ans = true;
        else {
          _set.clear();
          for (int i = 0; i < n / 2; ++i)
            _set.insert(s[i]);
          ans = _set.size() > 1;
        }
      }
    }

    cout << (ans ? "YES" : "NO") << '\n';
  }
  return 0;
}