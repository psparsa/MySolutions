// Problem: A. I Wanna Be the Guy
// Contest: Codeforces - Codeforces Round #268 (Div. 2)
// URL: https://codeforces.com/problemset/problem/469/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int levels[201] = {0};

  int p, q, l;

  cin >> p;
  for (int i = 0; i < p; ++i) {
    cin >> l;
    levels[l] = 1;
  }

  cin >> q;
  for (int i = 0; i < q; ++i) {
    cin >> l;
    levels[l] = 1;
  }

  for (int i = 1; i <= n; ++i) {
    if (levels[i] == 0) {
      cout << "Oh, my keyboard!" << endl;
      return 0;
    }
  }

  cout << "I become the guy." << endl;
  return 0;
}