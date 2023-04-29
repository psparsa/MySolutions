// Problem: A. Spell Check
// Contest: Codeforces - Codeforces Round 817 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1722/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
  int t;
  cin >> t;

  string name = "Timur";
  sort(name.begin(), name.end());
  set<string> my_set;
  do
    my_set.insert(name);
  while (next_permutation(name.begin(), name.end()));

  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    if (my_set.find(s) != my_set.end())
      cout << "YES";
    else
      cout << "NO";

    cout << '\n';
  }
  return 0;
}