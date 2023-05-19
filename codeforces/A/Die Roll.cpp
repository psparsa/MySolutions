// Problem: A. Die Roll
// Contest: Codeforces - Codeforces Beta Round 9 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/9/A
// Memory Limit: 64 MB
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
  int y, w;
  cin >> y >> w;
  const array<string, 7> arr = { "", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6" };
  cout << arr[max(y, w)] << '\n';
  return 0;
}
