// Problem: A. Keyboard
// Contest: Codeforces - Codeforces Round 271 (Div. 2)
// URL: https://codeforces.com/problemset/problem/474/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int
main()
{
  char dir;
  cin >> dir;
  string str;
  cin >> str;

  string row = "qwertyuiopasdfghjkl;zxcvbnm,./";

  string tmp;
  for (size_t i = 0; i < str.length(); ++i) {
    int pos = dir == 'R' ? -1 : 1;
    int id = row.find(str[i]);

    tmp += row[id + pos];
  }

  cout << tmp;

  return 0;
}
