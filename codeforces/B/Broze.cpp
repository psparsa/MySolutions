// Problem: B. Borze
// Contest: Codeforces - Codeforces Beta Round #32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/problemset/problem/32/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] == '.') {
      cout << '0';
    } else if (s[i] == '-') {
      cout << (s[i + 1] == '.' ? 1 : 2);
      ++i;
    }
  }

  return 0;
}