// Problem: B. Vanya and Lanterns
// Contest: Codeforces - Codeforces Round 280 (Div. 2)
// URL: https://codeforces.com/problemset/problem/492/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;

  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);

  // for (int x : a) cout << x << ", ";
  // cout << endl;

  int distance, biggestDistance = max(a[0], l - a[n - 1]) * 2;
  // cout << "Biggest Distance: " << biggestDistance << endl;

  for (int i = 0; i < n - 1; i++) {
    distance = a[i + 1] - a[i];
    if (distance > biggestDistance) biggestDistance = distance;
  }

  cout << fixed << setprecision(10) << biggestDistance / 2.0;
  return 0;
}