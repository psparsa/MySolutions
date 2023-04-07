// Problem: A. Mahmoud and Ehab and the even-odd game
// Contest: Codeforces - Codeforces Round 473 (Div. 2)
// URL: https://codeforces.com/problemset/problem/959/A
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
  int n;
  cin >> n;

  if (n % 2 == 0)
    cout << "Mahmoud" << endl;
  else
    cout << "Ehab" << endl;

  return 0;
}