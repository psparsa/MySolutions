// Problem: A. Garland
// Contest: Codeforces - Educational Codeforces Round 145 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1809/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    int arr[10] = { 0 };

    for (char c : s)
      ++arr[c - '0'];

    int tmp = *max_element(arr, arr + 10);

    if (tmp == 4)
      cout << -1;
    else if (tmp == 3)
      cout << 6;
    else
      cout << 4;

    nl;
  }

  return 0;
}