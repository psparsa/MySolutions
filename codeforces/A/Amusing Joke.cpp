// Problem: A. Amusing Joke
// Contest: Codeforces - Codeforces Round 101 (Div. 2)
// URL: https://codeforces.com/problemset/problem/141/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  string tmp = a + b;
  sort(tmp.begin(), tmp.end());

  sort(c.begin(), c.end());

  cout << (tmp == c ? "YES" : "NO");
  return 0;
}