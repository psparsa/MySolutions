// Problem: B. Fence
// Contest: Codeforces - Codeforces Round 211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int arr[150000];
int cumulative_sum[150000];

int
main()
{
  int n, k;
  cin >> n >> k;
  int max_val(0);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    max_val = max(max_val, arr[i]);
  }

  int total = max_val * k;
  int xx = 1;

  cumulative_sum[0] = arr[0];
  for (int i = 1; i < n; ++i) {
    cumulative_sum[i] = cumulative_sum[i - 1] + arr[i];
  }

  for (int i = 0; i <= n - k; ++i) {
    int x = cumulative_sum[i + k - 1] - (i > 0 ? cumulative_sum[i - 1] : 0);

    if (x < total) {
      total = x;
      xx = i + 1;
    }
  }

  cout << xx << endl;

  return 0;
}