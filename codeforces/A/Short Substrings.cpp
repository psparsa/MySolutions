// Problem: A. Short Substrings
// Contest: Codeforces - Codeforces Round 650 (Div. 3)
// URL: https://codeforces.com/contest/1367/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int t;
  string a, tmp;
  cin >> t;

  while (t--) {
    cin >> a;
    tmp += a[0];

    for (int i = 1; i < a.size() - 1; ++i)
      if (a[i] == a[i - 1]) {
        tmp += a[i];
        ++i;
      }

    tmp += a[a.size() - 1];
    cout << tmp << endl;
    tmp = "";
  }

  return 0;
}