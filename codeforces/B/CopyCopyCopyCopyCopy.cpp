// Problem: B. CopyCopyCopyCopyCopy
// Contest: Codeforces - Codeforces Round 628 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1325/B
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

    set<int> myset;
    int tmp;
    for (int i = 0; i < n; ++i) {
      cin >> tmp;
      myset.insert(tmp);
    }

    cout << myset.size() << '\n';
  }

  return 0;
}