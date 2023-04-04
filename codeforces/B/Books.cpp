// Problem: B. Books
// Contest: Codeforces - Codeforces Round 171 (Div. 2)
// URL: https://codeforces.com/problemset/problem/279/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <array>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int arr[100000];

int
main()
{
  int n, t;
  cin >> n >> t;

  for (int i = 0; i < n; ++i)
    scanf("%d", &arr[i]);

  int r = 0;
  int tmp = 0;
  int j = 0;

  for (int i = 0; i < n; ++i) {
    tmp += arr[i];

    while (j <= i && tmp > t) {
      tmp -= arr[j];
      ++j;
    }

    r = max(r, i - j + 1);
  }

  cout << r << endl;

  return 0;
}