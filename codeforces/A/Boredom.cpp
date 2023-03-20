// Problem: A. Boredom
// Contest: Codeforces - Codeforces Round 260 (Div. 1)
// URL: https://codeforces.com/problemset/problem/455/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <string.h>
using namespace std;

int
main()
{
  int n;
  cin >> n;
  long long arr[100001];
  memset(arr, 0, sizeof(arr));
  long long tmp;

  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    ++arr[tmp];
  }

  long long max1(arr[1]);
  long long max2(0);

  for (int i = 2; i <= 100000; ++i) {
    // 1 - 2 * 5 + 0
    tmp = max(max1, i * arr[i] + max2);

    max2 = max1;
    max1 = tmp;
  }

  cout << max1;
}