// Problem: A. Casimir's String Solitaire
// Contest: Codeforces - Codeforces Round 744 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1579/A
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
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int a = count(s.begin(), s.end(), 'A');
    int b = count(s.begin(), s.end(), 'B');
    int c = count(s.begin(), s.end(), 'C');

    cout << (b == a + c ? "YES" : "NO") << '\n';
  }
}