// Problem: A. Chat room
// Contest: Codeforces - Codeforces Beta Round #54 (Div. 2)
// URL: https://codeforces.com/problemset/problem/58/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, hello = "hello";
  cin >> s;
  int x = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == hello[x]) {
      ++x;
      if (x == 5) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}