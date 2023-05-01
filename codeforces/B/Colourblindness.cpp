// Problem: B. Colourblindness
// Contest: Codeforces - Codeforces Round 817 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1722/B
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
  while (t--) {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    bool valid = true;
    for (int i = 0; i < n; ++i) {
      if ((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R')) {
        valid = false;
        break;
      }
    }

    cout << (valid ? "YES" : "NO") << endl;
  }

  return 0;
}