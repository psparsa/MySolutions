// Problem: A. Dreamoon and Stairs
// Contest: Codeforces - Codeforces Round 272 (Div. 2)
// URL: https://codeforces.com/problemset/problem/476/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int
main()
{
  int n, m;
  cin >> n >> m;

  int tmp = -1;

  if (n >= m) {
    int tmp2 = n / 2 + n % 2;

    // cout << "Ping: " << tmp2 << endl;

    while (tmp2 % m != 0)
      ++tmp2;

    if (tmp2 <= n)
      tmp = tmp2;
  }

  cout << tmp << endl;

  return 0;
}