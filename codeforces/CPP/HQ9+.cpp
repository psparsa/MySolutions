// Problem: A. HQ9+
// Contest: Codeforces - Codeforces Beta Round #96 (Div. 2)
// URL: https://codeforces.com/problemset/problem/133/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  string p;
  cin >> p;

  for (size_t i = 0; i < p.size(); i++) {
    if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
  return 0;
}
