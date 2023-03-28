// Problem: A. Codeforces Checking
// Contest: Codeforces - Codeforces Round 849 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1791/A
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
  int n;
  cin >> n;
  ++n;
  string c;
  string cf = "codeforces";
  while (--n) {
    cin >> c;
    cout << (cf.find(c) != std::string::npos ? "YES" : "NO") << endl;
  }
  return 0;
}