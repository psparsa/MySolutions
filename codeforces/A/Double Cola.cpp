// Problem: A. Double Cola
// Contest: Codeforces - Yandex.Algorithm 2011: Qualification 2
// URL: https://codeforces.com/problemset/problem/82/A
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
  int n;
  cin >> n;
  string arr[] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
  int x(0);
  while (n > 5 * (1 << x)) {
    n -= 5 * (1 << x);
    ++x;
  }
  n--;
  cout << arr[n / (1 << x)] << '\n';
  return 0;
}