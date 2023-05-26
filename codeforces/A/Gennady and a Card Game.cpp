// Problem: A. Gennady and a Card Game
// Contest: Codeforces - Hello 2019
// URL: https://codeforces.com/problemset/problem/1097/A
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
  string a, b;
  cin >> a;
  bool ans = 0;
  for (int i = 0; i < 5 && !ans; ++i) {
    cin >> b;
    ans = b[0] == a[0] || b[1] == a[1];
  }
  cout << (ans ? "YES" : "NO") << '\n';
  return 0;
}