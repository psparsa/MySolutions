// Problem: A. Kefa and First Steps
// Contest: Codeforces - Codeforces Round #321 (Div. 2)
// URL: https://codeforces.com/problemset/problem/580/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int n, tmp = 1, maximum = 1;
  cin >> n;
  int profits[n] = {1};

  for (int i = 0; i < n; ++i) cin >> profits[i];

  for (int i = 1; i < n; ++i)
    if (profits[i] >= profits[i - 1])
      maximum = max(maximum, tmp += 1);
    else
      tmp = 1;

  cout << maximum;

  return 0;
}