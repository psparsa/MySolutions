// Problem: A. cAPS lOCK
// Contest: Codeforces - Codeforces Beta Round #95 (Div. 2)
// URL: https://codeforces.com/problemset/problem/131/A
// Memory Limit: 256 MB
// Time Limit: 500 ms

#include <cstring>
#include <iostream>
using namespace std;

string reverseCase(string s) {
  string tmp = s;

  for (size_t i = 0; i < s.size(); ++i) {
    if (tolower(s[i]) == s[i])
      tmp[i] = toupper(s[i]);
    else
      tmp[i] = tolower(s[i]);
  }

  return tmp;
}

int main() {
  string s;
  cin >> s;

  bool allUppercase = true;
  for (size_t i = 0; i < s.size(); ++i)
    if (s[i] != toupper(s[i])) {
      allUppercase = false;
      break;
    }

  bool isWrongCase = tolower(s[0]) == s[0];

  for (size_t i = 1; i < s.size() && isWrongCase; ++i) {
    if (s[i] != toupper(s[i])) {
      isWrongCase = false;
      break;
    }
  }

  cout << ((allUppercase || isWrongCase) ? reverseCase(s) : s);

  return 0;
}