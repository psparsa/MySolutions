// Problem: B. Queue at the School
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, t;
  string s;
  cin >> n >> t >> s;

  for (int j = 0; j < t; ++j) {
    bool isDone = true;
    for (int i = 1; i < n; ++i) {
      if (s[i] == 'G' && s[i - 1] == 'B') {
        swap(s[i], s[i - 1]);
        ++i;
        isDone = false;
      }
    }
    if (isDone) break;
  }

  cout << s;

  return 0;
}