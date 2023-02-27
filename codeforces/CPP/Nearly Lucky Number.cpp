// Problem: A. Nearly Lucky Number
// Contest: Codeforces - Codeforces Beta Round #84 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/110/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  string n;
  cin >> n;
  int x;
  for (int i = n.size() - 1; i > -1; --i)
    if (n[i] == '4' || n[i] == '7') ++x;
  cout << (x == 4 || x == 7 ? "YES" : "NO");
  return 0;
}
