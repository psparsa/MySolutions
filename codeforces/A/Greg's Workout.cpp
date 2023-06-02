// Problem: A. Greg's Workout
// Contest: Codeforces - Codeforces Round 156 (Div. 2)
// URL: https://codeforces.com/problemset/problem/255/A
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
  int n;
  cin >> n;

  int a(0), b(0), c(0);
  for (int i = 1; i <= n; i++) {
    int t;
    cin >> t;
    if (i % 3 == 1)
      a += t;
    else if (i % 3 == 2)
      b += t;
    else
      c += t;
  }

  cout << ((a > b && a > c)   ? "chest"
           : (b > a && b > c) ? "biceps"
                              : "back")
       << '\n';
  return 0;
}