// Problem: A. Do Not Be Distracted!
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int
main()
{

  int t;
  cin >> t;

  int n;
  while (t--) {
    cin >> n;

    string str;
    cin >> str;

    bool x = 1;

    for (int i = 2; i < n; ++i) {
      if (str[i - 1] != str[i])
        for (int j = 0; j < i; ++j)
          if (str[j] == str[i]) {
            x = 0;
            goto end;
          }
    }

  end:
    cout << (x ? "YES" : "NO") << '\n';
  }

  return 0;
}