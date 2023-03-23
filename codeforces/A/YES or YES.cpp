// Problem: A. YES or YES?
// Contest: Codeforces - Codeforces Round 806 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1703/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <cctype>
#include <iostream>
using namespace std;

int
main()
{
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    string tmp = "";

    for (int i = 0; i < 3; ++i)
      tmp += tolower(s[i]);

    cout << (tmp == "yes" ? "YES" : "NO") << endl;
  }

  return 0;
}