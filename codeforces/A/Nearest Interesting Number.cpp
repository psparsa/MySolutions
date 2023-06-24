// Problem: A. Nearest Interesting Number
// Contest: Codeforces - Codeforces Round 570 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1183/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
sumOfDigits(int n)
{
  int x(0);

  while (n > 0) {
    x += n % 10;
    n /= 10;
  }

  return x;
}

int
main()
{
  int a;
  cin >> a;

  int i(a);
  while (true) {

    if (sumOfDigits(i) % 4 == 0) {
      cout << i << endl;
      break;
    }

    ++i;
  }

  return 0;
}
