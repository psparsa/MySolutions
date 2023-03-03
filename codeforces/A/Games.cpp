// Problem: A. Games
// Contest: Codeforces - Codeforces Round #164 (Div. 2)
// URL: https://codeforces.com/problemset/problem/268/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n, tmp = 0;
  cin >> n;
  int teams[2][n];

  for (int i = 0; i < n; i++) cin >> teams[0][i] >> teams[1][i];

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j) tmp += teams[0][i] == teams[1][j] ? 1 : 0;

  cout << tmp;

  return 0;
}