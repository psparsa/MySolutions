// Problem: A. Mishka and Game
// Contest: Codeforces - Codeforces Round #365 (Div. 2)
// URL: https://codeforces.com/problemset/problem/703/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int n, m = 0, c = 0, mm, cc;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> mm >> cc;
    if (mm == cc)
      continue;
    else if (mm > cc)
      ++m;
    else
      ++c;
  }

  if (m == c)
    cout << "Friendship is magic!^^";
  else if (m > c)
    cout << "Mishka";
  else
    cout << "Chris";

  cout << endl;

  return 0;
}