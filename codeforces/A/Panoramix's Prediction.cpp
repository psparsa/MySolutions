// Problem: A. Panoramix's Prediction
// Contest: Codeforces - Codeforces Beta Round 69 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/80/A
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

bool
isPrime(int n)
{

  if (n < 2)
    return false;

  if (n == 2)
    return true;

  if (n % 2 == 0)
    return false;

  for (int i = 3; (i * i) <= n; i += 2)
    if (n % i == 0)
      return false;

  return true;
}

int
main()
{
  int n, m;

  cin >> n >> m;

  int tmp = -1;
  int x = n + 1;
  while (1) {
    if (isPrime(x)) {
      tmp = x;
      break;
    }
    ++x;
  }
  cout << (tmp == m ? "YES" : "NO") << '\n';
  return 0;
}