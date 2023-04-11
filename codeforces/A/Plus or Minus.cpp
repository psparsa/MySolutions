// Problem: A. Plus or Minus
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1807/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
 
#include <algorithm>
#include <array>
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
  int a, b, c;
  while (t--) {
    cin >> a >> b >> c;
    cout << (a + b == c ? "+" : "-") << endl;
  }
  return 0;
}
