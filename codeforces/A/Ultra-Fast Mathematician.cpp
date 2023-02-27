// Problem: A. Ultra-Fast Mathematician
// Contest: Codeforces - Codeforces Beta Round #57 (Div. 2)
// URL: https://codeforces.com/problemset/problem/61/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  string tmp = s1;

  for (int i = 0; i < s1.size(); ++i) tmp[i] = (s1[i] == s2[i] ? '0' : '1');

  cout << tmp;
  return 0;
}