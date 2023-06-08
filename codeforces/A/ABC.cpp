// Problem: A. ABC
// Contest: Codeforces - Codeforces Round 769 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1632/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <bitset>
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
  string s;
  while (t--) {
    cin >> n >> s;
    cout << (s == "01" || s == "10" || n == 1 ? "YES" : "NO") << '\n';
  }
  return 0;
}